/**
 * \copyright Copyright (c) 2019-2024, Buildstorm Pvt Ltd
 *
 * \file app_config.h
 * \brief app_config header file.
 *
 * The app_config Contains macros for the application.
 *
 *
 */

#ifndef _APP_CONFIG_H_
#define _APP_CONFIG_H_

#include <stdbool.h>
#include <stdint.h>

#include "stdbool.h"
#include "stdint.h"
#include "lib_config.h"

#define APP_MODULE_MAIN LIB_MODULE_MAX
//-------------------------APP CONFIG--------------------------/

#define TASK_APP_PRIORITY 4
#define TASK_APP_STACK_SIZE (4 * 1024) // reduce it to 4096

#define TEST_WIFI_SSID "Wifi SSID"
#define TEST_WIFI_PASSWORD "Wifi Password"

#define AWS_IOT_MQTT_HOST "Your AWS host"

#define AWS_IOT_MQTT_PORT 8883
#define AWS_PROVISION_TEMPLATE_NAME "Provision Template"

#define LED0_PIN 2

#define APP_VERSION "1.0.0"

#define MODEM_POWERKEY_GPIO_PIN 5
#define MODEM_RESETKEY_GPIO_PIN 4
#define MODEM_RX_UART_PIN 16
#define MODEM_TX_UART_PIN 17
#define MODEM_UART_NUM 2

#define APN "airtelgprs.com"
#define USERID ""
#define PASSWORD ""

#endif //_APP_CONFIG_H_
