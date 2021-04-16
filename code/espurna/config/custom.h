// Prevents checking of default options for this board.
#define MANUFACTURER        "NODEMCU"
#define DEVICE              "LOLIN"

// Features
#define ALEXA_SUPPORT          0
#define API_SUPPORT            1
#define BUTTON_SUPPORT         0
#define DEBUG_SERIAL_SUPPORT   1
#define DEBUG_TELNET_SUPPORT   0
#define DEBUG_UDP_SUPPORT      0
#define DEBUG_WEB_SUPPORT      1
#define DOMOTICZ_SUPPORT       0
#define ENCODER_SUPPORT        1
#define HOMEASSISTANT_SUPPORT  1 // Not sure which of these works.
#define HASS_SUPPORT           1 // Not sure which of these works.
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
#define OTA_ARDUINOOTA_SUPPORT 0
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


// Sensors
#define ADE7953_SUPPORT        0
#define AM2320_SUPPORT         0
#define ANALOG_SUPPORT         0
#define BH1750_SUPPORT         0
#define BMP180_SUPPORT         0
#define BMX280_SUPPORT         0
#define BME680_SUPPORT         0
#define CSE7766_SUPPORT        0
#define DALLAS_SUPPORT         1
#define DHT_SUPPORT            0
#define DIGITAL_SUPPORT        0
#define ECH1560_SUPPORT        0
#define EMON_ADC121_SUPPORT    0
#define EMON_ADS1X15_SUPPORT   0
#define EMON_ANALOG_SUPPORT    0
#define EVENTS_SUPPORT         0
#define EZOPH_SUPPORT          0
#define GEIGER_SUPPORT         0
#define GUVAS12SD_SUPPORT      0
#define HLW8012_SUPPORT        0
#define LDR_SUPPORT            0
#define MAX6675_SUPPORT        0
#define MHZ19_SUPPORT          0
#define MICS2710_SUPPORT       0
#define MICS5525_SUPPORT       0
#define NTC_SUPPORT            0
#define PMSX003_SUPPORT        0
#define PULSEMETER_SUPPORT     0
#define PZEM004T_SUPPORT       0
#define SDS011_SUPPORT         0
#define SENSEAIR_SUPPORT       0
#define SHT3X_I2C_SUPPORT      0
#define SI7021_SUPPORT         0
#define SONAR_SUPPORT          0
#define T6613_SUPPORT          0
#define THERMOSTAT_SUPPORT     0
#define TMP3X_SUPPORT          0
#define V9261F_SUPPORT         0
#define VEML6075_SUPPORT       0
#define VL53L1X_SUPPORT        0
#define HDC1080_SUPPORT        0


// Configuration
#define LIGHT_SAVE_ENABLED 0
#define BUTTON_MQTT_SEND_ALL_EVENTS 1
#define MQTT_RETAIN 0

// Attempt to fix disconnecting when low WiFi power.
#define WIFI_CONNECT_RETRIES 5 // try to connect five times to  each WiFi network
#define WIFI_CONNECT_INTERVAL 4000 // try to reconnect every 4 seconds

// Make the built in LED flash on WiFi activity
#define LED1_PIN 2
#define LED1_PIN_INVERSE 1
#define LED1_MODE LED_MODE_WIFI

// Built-in flash button
#define BUTTON1_PIN 0
#define BUTTON1_CONFIG BUTTON_PUSHBUTTON | BUTTON_DEFAULT_HIGH
#define BUTTON1_LNGCLICK BUTTON_ACTION_NONE

#define DALLAS_PIN 5 // D1


// Secret Configuration
#include "credentials.h"
