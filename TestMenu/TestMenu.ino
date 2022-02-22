// author: chris-scientist
// created at: 22/02/2022

#include <Gamebuino-Meta.h>
#include "Constants.h"
#include "Application.h"

//uint8_t testMenuItems[] = {MenuUI::ALPHA_ITEM_INDEX, MenuUI::GAMMA_ITEM_INDEX};
uint8_t appMenuItems[] = {MenuUI::BETA_ITEM_INDEX, MenuUI::GAMMA_ITEM_INDEX, MenuUI::DELTA_ITEM_INDEX};

Application app;
//
// Test OK
//MenuUI menuTest;

void setup() {
  gb.begin();
  gb.display.setPalette(PALETTE);
  //menuTest.initialize(testMenuItems, sizeof(testMenuItems) / sizeof(testMenuItems[0]));
  app.initialize();
}

void loop() {
  gb.waitForUpdate();
  gb.display.clear();
  // Run the game
  app.run();
  //
  // other test
  //menuTest.manageCommands();
  //menuTest.rendering();
}
