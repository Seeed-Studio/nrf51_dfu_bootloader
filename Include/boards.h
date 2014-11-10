/* Copyright (c) 2012 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */
#ifndef BOARDS_H
#define BOARDS_H

#if defined(BOARD_NRF6310)
  #include "boards/nrf6310.h"
#elif defined(BOARD_PCA10000)
  #include "boards/pca10000.h"
#elif defined(BOARD_PCA10001)
  #include "boards/pca10001.h"
#elif defined(BOARD_PCA10003)
  #include "boards/pca10003.h"
#elif defined(ARCH_BLE)
  #include "boards/arch_ble.h"
#elif defined(BLE_SMURFS)
  #include "boards/ble_smurfs.h"
#elif defined(GROVE_NODE)
  #include "boards/grove_node.h"
#else
#error "Board is not defined"
#endif

#endif
