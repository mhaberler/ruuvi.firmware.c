/**
 * Configuration for ruuvi.drivers.c nrf5 sdk15 platform support. Enable or disable modules you're using here.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */

#include "application_config.h"

#ifndef RUUVI_PLATFORM_NRF5_SDK15_CONFIG_H
#define RUUVI_PLATFORM_NRF5_SDK15_CONFIG_H

#if RUUVI_NRF5_SDK15_ENABLED
  #define RUUVI_NRF5_SDK15_ATOMIC_ENABLED                         APPLICATION_ATOMIC_ENABLED
  #define RUUVI_NRF5_SDK15_NRF52832_ADC_ENABLED                   APPLICATION_ADC_ENABLED
  #define RUUVI_NRF5_SDK15_COMMUNICATION_ENABLED                  APPLICATION_COMMUNICATION_ENABLED
  #define RUUVI_NRF5_SDK15_COMMUNICATION_BLE4_ADVERTISING_ENABLED APPLICATION_COMMUNICATION_BLUETOOTH_ENABLED
  #define RUUVI_NRF5_SDK15_COMMUNICATION_BLE4_GATT_ENABLED        APPLICATION_COMMUNICATION_BLUETOOTH_ENABLED
  #define RUUVI_NRF5_SDK15_COMMUNICATION_BLE4_STACK_ENABLED       APPLICATION_COMMUNICATION_BLUETOOTH_ENABLED
  // 2,3 after SD timing critical events. 6, 7 after SD non-critical events.
  #define RUUVI_NRF5_SDK15_RADIO_IRQ_PRIORITY                     3
  #define RUUVI_NRF5_SDK15_COMMUNICATION_NFC_ENABLED              APPLICATION_COMMUNICATION_NFC_ENABLED
  #define RUUVI_NRF5_SDK15_FLASH_ENABLED                          APPLICATION_FLASH_ENABLED
  #define RUUVI_NRF5_SDK15_GPIO_ENABLED                           APPLICATION_GPIO_ENABLED
  #define RUUVI_NRF5_SDK15_GPIO_INTERRUPT_ENABLED                 APPLICATION_GPIO_INTERRUPT_ENABLED
  #define RUUVI_NRF5_SDK15_I2C_ENABLED                            APPLICATION_I2C_ENABLED
  #define RUUVI_NRF5_SDK15_LOG_ENABLED                            APPLICATION_LOG_ENABLED
  #define RUUVI_NRF5_SDK15_NRF52832_ENVIRONMENTAL_ENABLED         APPLICATION_ENVIRONMENTAL_MCU_ENABLED
  #define RUUVI_NRF5_SDK15_NRF52832_RTC_ENABLED                   APPLICATION_RTC_MCU_ENABLED
  #define RUUVI_NRF5_SDK15_POWER_ENABLED                          APPLICATION_POWER_ENABLED
  #define RUUVI_NRF5_SDK15_SCHEDULER_ENABLED                      APPLICATION_SCHEDULER_ENABLED
  #define RUUVI_NRF5_SDK15_SPI_ENABLED                            APPLICATION_SPI_ENABLED
  #define RUUVI_NRF5_SDK15_TIMER_ENABLED                          APPLICATION_TIMER_ENABLED
  #define RUUVI_NRF5_SDK15_WATCHDOG_ENABLED                       APPLICATION_WATCHDOG_ENABLED
  #define RUUVI_NRF5_SDK15_YIELD_ENABLED                          APPLICATION_YIELD_ENABLED


  #define RUUVI_NRF5_SDK15_COMMUNICATION_NFC_NDEF_FILE_SIZE       APPLICATION_COMMUNICATION_NFC_NDEF_FILE_SIZE
  #define RUUVI_NRF5_SDK15_COMMUNICATION_NFC_TEXT_BUFFER_SIZE     APPLICATION_COMMUNICATION_NFC_TEXT_BUFFER_SIZE
  #define RUUVI_NRF5_SDK15_COMMUNICATION_NFC_DATA_BUFFER_SIZE     APPLICATION_COMMUNICATION_NFC_DATA_BUFFER_SIZE
  #define RUUVI_NRF5_SDK15_COMMUNICATION_NFC_MAX_RECORDS          APPLICATION_COMMUNICATION_NFC_MAX_RECORDS

  #define RUUVI_NRF5_SDK15_SCHEDULER_DATA_MAX_SIZE                APPLICATION_TASK_DATA_MAX_SIZE
  #define RUUVI_NRF5_SDK15_SCHEDULER_QUEUE_MAX_LENGTH             APPLICATION_TASK_QUEUE_MAX_LENGTH
  #define RUUVI_NRF5_SDK15_TIMER_MAX_INSTANCES                    APPLICATION_TIMER_MAX_INSTANCES


  // Must not be BLE4_STACK_CONN_TAG of nRF5 SDK. uint8_t
  #define RUUVI_NRF5_SDK15_BLE4_STACK_CONN_TAG                   1

#endif

#endif