// author: chris-scientist
// created at: 22/02/2022

#include <Gamebuino-Meta.h>

#include "Application.h"

#include "Constants.h"

const uint8_t Application::ONE_STATE      = 1;
const uint8_t Application::SECOND_STATE   = 2;

Application::Application() :
  currentState(Application::ONE_STATE),
  counter(0)
{}

void Application::initialize() {
  this->appMenu.initialize(appMenuItems, sizeof(appMenuItems) / sizeof(appMenuItems[0]))
}

void Application::run() {
  if(this->currentState == Application::ONE_STATE) {
    // one state
    gb.display.setColor(PALETTE[0x2]);
    gb.display.print("one");
    // menu
    this->appMenu.manageCommands();
    this->appMenu.rendering();

    if(this->appMenu.isBetaItem()) {
      this->currentState = Application::SECOND_STATE;
    }
    this->appMenu.reset();
  } else {
    // second state
    gb.display.setColor(PALETTE[0x2]);
    gb.display.print("second");
    counter++;
    if(counter >= 240) {
      this->currentState = Application::ONE_STATE;
    }
  }
}
