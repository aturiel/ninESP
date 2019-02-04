/**
 * Project: ninHOME_Node
 * @file app_config.h
 * @author Michael Sauer <sauer.uetersen@gmail.com>
 * @date 30.11.2017
 *
 * This file includes all default settings
 *
 */


#ifndef INCLUDE_APP_DEFAULTS_H_
#define INCLUDE_APP_DEFAULTS_H_

/* Version information (Note: had to be in this order to work properly at the moment) */
#define VER_BUILD		100
#define VER_MINOR		3
#define VER_MAJOR		0

/* Default Wifi Accesspoint Name for Setup */
#define NINHOME_AP_NAME "ninHome Configuration"

/* mDNS Settings */
#define DEFAULT_MDNS_HOSTNAME "ninhome"
#define DEFAULT_MDNS_SERVERNAME "ninHOME"
#define DEFAULT_MDNS_SERVERPORT 80

#define DEFAULT_CONNECT_CHECK_INTERVAL 3000

//#define DEFAULT_LED_SETUP_PIN 15 // 15/D8  // Display = 0 / Main = 15
//#define RESET_PIN 13 // 13/D7  // Display = 13 / Main = 4

/* Relay Settings */
#define DEFAULT_RELAY false
#define DEFAULT_RELAY_PIN 14 //D5
#define DEFAULT_RELAY_INVERT false
#define DEFAULT_RELAY_STATUS_PIN -1
#define DEFAULT_RELAY_STATUS_INVERT false
#define DEFAULT_RELAY_TOPIC_CMD "client/relay"
#define DEFAULT_RELAY_TOPIC_PUB "client/relaystate"

/* Key debouncing intervall (100ms) */
#define DEFAULT_KEYINPUT false
#define DEFAULT_KEYINPUT_PIN 5 //D1
#define DEFAULT_KEYINPUT_DEBOUNCE_MS 500
#define DEFAULT_KEYINPUT_INVERT false

/* Default Sensor Timer Interval (30sec) */
#define DEFAULT_SENSOR_TIMER_INTERVAL 30000

/* ADC Settings */
#define DEFAULT_ADC false
#define DEFAULT_ADC_PUBLISH false
#define DEFAULT_ADC_TOPIC "client/adc"

/* Motion Sensor Settings */
#define DEFAULT_MOTION_SENSOR false
#define DEFAULT_MOTION_PIN 12
#define DEFAULT_MOTION_INVERT false
#define DEFAULT_MOTION_INTERVAL 100
#define DEFAULT_MOTION_TOPIC "client/motion"

/* MQTT Settings */
#define DEFAULT_MQTT_SERVER "test.mosquitto.org"
#define DEFAULT_MQTT_PORT 1883
#define DEFAULT_MQTT_LWT "lwt/client"
#define DEFAULT_MQTT_CMD "cmd/client"
#define DEFAULT_MQTT_PUB "clients/client"
#define DEFAULT_MQTT_USERID "ninHOME_Client"
#define DEFAULT_MQTT_LOGIN "user"
#define DEFAULT_MQTT_PASS "password"

/* FTP Settings */
#define DEFAULT_FTP_USER "ftpuser"
#define DEFAULT_FTP_PASS "1234"
#define DEFAULT_FTP_PORT 21

/* UDP Settings */
#define DEFAULT_UDP true
#define DEFAULT_UDP_PORT 1234

/* RCSwitch Settings */
#define DEFAULT_RCSWITCH false
#define DEFAULT_RCSWITCH_PIN 4 //D2
#define DEFAULT_RCSWITCH_TOPIC_PREFIX "client/rcswitch/"

/* MAX7219 Display */
#define DEFAULT_MAX7219 false
#define DEFAULT_MAX7219_SS_PIN 4
#define DEFAULT_MAX7219_COUNT 5
#define DEFAULT_MAX7219_ZONES 1
#define DEFAULT_MAX7219_MAXZONES 5
#define DEFAULT_MAX7219_TEXT ""
#define DEFAULT_MAX7219_INVERT 0
#define DEFAULT_MAX7219_INTENSITY 7
#define DEFAULT_MAX7219_SPEED 10
#define DEFAULT_MAX7219_ALIGNMENT PA_CENTER
#define DEFAULT_MAX7219_EFFECT_IN PA_PRINT
#define DEFAULT_MAX7219_EFFECT_OUT PA_NO_EFFECT
#define DEFAULT_MAX7219_TOPIC_PREFIX "client/display/"
#define DEFAULT_MAX7219_TOPIC_ENABLE "enable"
#define DEFAULT_MAX7219_TOPIC_SCROLL "scroll"
#define DEFAULT_MAX7219_TOPIC_SPEED "speed"
#define DEFAULT_MAX7219_TOPIC_PAUSE "pause"
#define DEFAULT_MAX7219_TOPIC_CHARWIDTH "charwidth"
#define DEFAULT_MAX7219_TOPIC_INVERT "invert"
#define DEFAULT_MAX7219_TOPIC_TEXT "text"
#define DEFAULT_MAX7219_TOPIC_INTENSITY "intensity"
#define DEFAULT_MAX7219_TOPIC_ALIGNMENT "alignment"
#define DEFAULT_MAX7219_TOPIC_EFFECT_IN "effectin"
#define DEFAULT_MAX7219_TOPIC_EFFECT_OUT "effectout"
#define DEFAULT_MAX7219_TOPIC_RESET "reset"

#endif /* INCLUDE_APP_DEFAULTS_H_ */
