// Prevents checking of default options for this board.
#define MANUFACTURER            "ITEAD"
#define DEVICE                  "SONOFF_S31"

// Features
#define ALEXA_SUPPORT          0
#define API_SUPPORT            1
#define BUTTON_SUPPORT         1
#define DEBUG_SERIAL_SUPPORT   0
#define DEBUG_TELNET_SUPPORT   0
#define DEBUG_UDP_SUPPORT      0
#define DEBUG_WEB_SUPPORT      1
#define DOMOTICZ_SUPPORT       0
#define ENCODER_SUPPORT        1
#define HOMEASSISTANT_SUPPORT  1
#define I2C_SUPPORT            0
#define INFLUXDB_SUPPORT       0
#define IR_SUPPORT             0
#define LED_SUPPORT            1
#define LLMNR_SUPPORT          0
#define MDNS_SERVER_SUPPORT    0
#define MQTT_SUPPORT           1
#define NETBIOS_SUPPORT        0
#define NOFUSS_SUPPORT         1
#define NTP_SUPPORT            1
#define OTA_ARDUINOOTA_SUPPORT 1
#define RFM69_SUPPORT          0
#define RFB_SUPPORT            0
#define RPN_RULES_SUPPORT      0
#define SCHEDULER_SUPPORT      1
#define SPIFFS_SUPPORT         0
#define SSDP_SUPPORT           0
#define TELNET_SUPPORT         0
#define TERMINAL_SUPPORT       1
#define TERMINAL_MQTT_SUPPORT  0
#define TERMINAL_WEB_API_SUPPORT 0
#define THINGSPEAK_SUPPORT     0
#define TUYA_SUPPORT           0
#define UART_MQTT_SUPPORT      0
#define WEB_SUPPORT            1


// Configuration
#define LIGHT_SAVE_ENABLED 0
#define BUTTON_MQTT_SEND_ALL_EVENTS 1
#define MQTT_RETAIN 0
#define MQTT_ENABLED 1
#define HOMEASSISTANT_ENABLED 1


// Buttons
#define BUTTON1_PIN             0
#define BUTTON1_CONFIG          BUTTON_PUSHBUTTON | BUTTON_DEFAULT_HIGH
#define BUTTON1_RELAY           1

// Relays
#define RELAY1_PIN              12
#define RELAY1_TYPE             RELAY_TYPE_NORMAL

// LEDs
#define LED1_PIN                13
#define LED1_PIN_INVERSE        1

// CSE7766
#define CSE7766_SUPPORT         1
#define CSE7766_RX_PIN          3


// Secret Configuration
#include "credentials.h"
