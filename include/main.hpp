#ifndef Main_h
#define Main_h

#include <Arduino.h>

#include "consts.hpp"

#if INTERPRETER
#include "interpreter.hpp"
#endif
#include "timer.hpp"
#include "mode.hpp"
#include "sensor.hpp"
#include "settings.hpp"
#include "peripherals/sd.hpp"
#include "peripherals/buttons.hpp"
#include "peripherals/led.hpp"
#include "peripherals/sd.hpp"
#include "peripherals/clock.hpp"
#if GPS_ENABLED
#include "peripherals/gps.hpp"
#endif

#include "modes/standard.hpp"
#include "modes/economy.hpp"
#include "modes/configuration.hpp"
#include "modes/maintenance.hpp"

#include "peripherals/sensors/temperature.hpp"
#include "peripherals/sensors/humidity.hpp"
#include "peripherals/sensors/pressure.hpp"
#include "peripherals/sensors/brightness.hpp"

void restart();

/**
 * @brief Mode en cours 
 *
 * Cette variable contient le mode en cours d'exécution.
 * Les modes disponibles sont (voir consts.hpp):
 * - STANDARD_MODE
 * - ECONOMY_MODE
 * - CONFIGURATION_MODE
 * - MAINTENANCE_MODE
 */
extern int mode;
/**
 * @brief Dernier mode; pour revenir au mode précédent
 *
 * Cette variable contient le mode en cours d'exécution.
 * Les modes disponibles sont (voir consts.hpp):
 * - STANDARD_MODE
 * - ECONOMY_MODE
 * - CONFIGURATION_MODE
 * - MAINTENANCE_MODE
 */
extern int previousMode;
/**
 * @brief Contient une représentation (class) de chaque capteur
 */
extern Sensor* sensors[NUMBER_OF_SENSORS];
/**
 * @brief Si le port série est utilisé pour afficher les données en temps réel
 */
extern bool liveMode;
/**
 * @brief 
 */
extern float lastMeasurements[NUMBER_OF_SENSORS];

#endif