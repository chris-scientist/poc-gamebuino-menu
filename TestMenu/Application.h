// author: chris-scientist
// created at: 22/02/2022

#pragma once

#include "MenuUI.h"

class Application {
  private:
    static const uint8_t ONE_STATE;
    static const uint8_t SECOND_STATE;

    uint8_t currentState;

    MenuUI appMenu;

    uint8_t counter;
  public:
    Application();
    void initialize();
    void run();
};
