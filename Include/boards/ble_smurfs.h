/* Hardware information for the Arch BLE board
 *
 */
#ifndef BLE_SMURFS_H__
#define BLE_SMURFS_H__

#include "nrf_gpio.h"

#define LED_0           21
#define LED_1           22
#define LED_2           23

#define BUTTON_PIN      17
#define BUTTON_PULL     NRF_GPIO_PIN_PULLUP
#define BUTTON_DOWN     0

#define RX_PIN_NUMBER   11     // UART RX pin number.
#define TX_PIN_NUMBER   9      // UART TX pin number.
#define CTS_PIN_NUMBER  8      // UART Clear To Send pin number. Not used if HWFC is set to false.
#define RTS_PIN_NUMBER  10     // UART Request To Send pin number. Not used if HWFC is set to false.
#define HWFC            false  // UART hardware flow control.

#endif  // BLE_SMURFS_H__
