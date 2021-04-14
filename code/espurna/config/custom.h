// Prevents checking of default options for this board.
#define MANUFACTURER        "NODEMCU"
#define DEVICE              "LOLIN"


#define TELNET_SUPPORT 0
#define ALEXA_SUPPORT 0
#define DOMOTICZ_SUPPORT 0
#define INFLUXDB_SUPPORT 0
#define IR_SUPPORT 0
#define LLMNR_SUPPORT 0
#define MDNS_SERVER_SUPPORT 0
#define NETBIOS_SUPPORT 0
#define RFB_SUPPORT 0
#define THINGSPEAK_SUPPORT 0
#define THERMOSTAT_SUPPORT 0
#define UART_MQTT_SUPPORT 0
#define MQTT_SUPPORT 1
#define WEB_SUPPORT 1
#define DIGITAL_SUPPORT 1
#define HASS_SUPPORT 1
#define LIGHT_SAVE_ENABLED 0
#define TERMINAL_MQTT_SUPPORT 0
#define TERMINAL_WEB_API_SUPPORT 0
#define DEBUG_UDP_SUPPORT 0
#define DEBUG_TELNET_SUPPORT 0


// Configuration
#define BUTTON_MQTT_SEND_ALL_EVENTS 1
#define MQTT_RETAIN 0

// Make the built in LED flash on WiFi activity
#define LED1_PIN 2
#define LED1_PIN_INVERSE 1
#define LED1_MODE LED_MODE_WIFI

// For the motor relay
#define RELAY1_PIN 13
#define RELAY1_TYPE RELAY_TYPE_NORMAL
#define RELAY1_PULSE_MODE RELAY_PULSE_OFF // defaults to being off (not watering)
#define RELAY1_PULSE_TIME 20 // number of seconds the relay can stay on for

// Built-in flash button
#define BUTTON1_PIN 0
#define BUTTON1_CONFIG BUTTON_PUSHBUTTON | BUTTON_DEFAULT_HIGH
#define BUTTON1_LNGCLICK BUTTON_ACTION_NONE

// Extra external button
#define BUTTON2_PIN 14
#define BUTTON2_CONFIG BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#define BUTTON2_PRESS BUTTON_ACTION_PULSE
#define BUTTON2_CLICK BUTTON_ACTION_NONE
#define BUTTON2_RELEASE BUTTON_ACTION_OFF
#define BUTTON2_DBLCLICK BUTTON_ACTION_TOGGLE
#define BUTTON2_RELAY 1

// Float sensor
#define DIGITAL1_PIN 12


// Secret Configuration
#include "credentials.h"
