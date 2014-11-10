/* Hardware information for the Arch BLE board
 *
 */
#ifndef GROVE_NODE_H__
#define GROVE_NODE_H__

#include "nrf_gpio.h"

#define LED_0           17
#define LED_1           18

#define BUTTON_PIN      30
#define BUTTON_PULL     NRF_GPIO_PIN_PULLUP
#define BUTTON_DOWN     0

#define POWER_PIN       8

#define RX_PIN_NUMBER   31     // UART RX pin number.
#define TX_PIN_NUMBER   31     // UART TX pin number.
#define CTS_PIN_NUMBER  31     // UART Clear To Send pin number. Not used if HWFC is set to false.
#define RTS_PIN_NUMBER  31     // UART Request To Send pin number. Not used if HWFC is set to false.
#define HWFC            false  // UART hardware flow control.

#endif  // GROVE_NODE_H__
