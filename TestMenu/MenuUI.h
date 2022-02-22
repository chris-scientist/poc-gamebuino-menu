// author: chris-scientist
// created at: 22/02/2022

#pragma once

#include <Arduino.h>

class MenuUI {
  private:
    static const bool ITEM_SELECTED;

    uint8_t currentPageIndex;
    uint8_t maxItems;
    uint8_t * items;
    bool isItemSelectedFlag;
  protected:
    void renderingItem() const;

    const bool isItemSelected() const;
    const uint8_t getCurrentItemIndex() const;

    const bool isCurrentAlphaItem() const;
    const bool isCurrentBetaItem() const;
    const bool isCurrentGammaItem() const;
    const bool isCurrentDeltaItem() const;    
  public:
    static const uint8_t NO_ITEM_INDEX;
    static const uint8_t ALPHA_ITEM_INDEX;
    static const uint8_t BETA_ITEM_INDEX;
    static const uint8_t GAMMA_ITEM_INDEX;
    static const uint8_t DELTA_ITEM_INDEX;

    /**
     * Desactive all items by default.
     */
    MenuUI();

    /**
     * Initialize maxItems.
     */  
    void initialize(uint8_t * anItems, size_t aNbItems);

    /**
     * Manage commands of menu.
     */
    void manageCommands();

    /**
     * Draw menu under attributes of this object.
     */
    void rendering() const;

    void reset();

    const bool isAlphaItem() const;
    const bool isBetaItem() const;
    const bool isGammaItem() const;
    const bool isDeltaItem() const;
};
