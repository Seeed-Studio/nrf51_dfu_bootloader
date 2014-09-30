/* Hardware information for the Arch BLE board
 *
 */
#ifndef ARCH_BLE_H__
#define ARCH_BLE_H__

#include "nrf_gpio.h"

#define LED             30

#define BUTTON          1
#define BUTTON_PULL     NRF_GPIO_PIN_PULLUP

#define RX_PIN_NUMBER   7     // UART RX pin number.
#define TX_PIN_NUMBER   8     // UART TX pin number.
#define CTS_PIN_NUMBER  26    // UART Clear To Send pin number. Not used if HWFC is set to false.
#define RTS_PIN_NUMBER  27    // UART Request To Send pin number. Not used if HWFC is set to false.
#define HWFC            false // UART hardware flow control.

#endif  // ARCH_BLE_H__
