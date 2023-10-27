#ifndef Buttons_h
#define Buttons_h

#include "consts.hpp"
#include "timer.hpp"
#include "mode.hpp"

/**
 * @brief Initialise les boutons (sans les interruptions).
 * 
 * Références :
 * @ref RED_BUTTON_PIN
 * @ref GREEN_BUTTON_PIN
*/
void initButtons();
/**
 * @brief Initialise les interruptions sur les boutons.
 * 
 * Références : 
 * @ref createTimer()
 * @ref stopTimer()
 * @ref redButtonPressed()
 * @ref greenButtonPressed()
 * @ref RED_BUTTON_PIN
 * @ref GREEN_BUTTON_PIN
*/
void initButtonsInterrupt();

/**
 * @brief Fonction appelée lors de l'appui sur le bouton vert ou rouge.
 * 
 * Elle fait la distinction entre les deux boutons et créer un compteur avec
 * la fonction correspondante.
*/
void buttonPressed();

#endif