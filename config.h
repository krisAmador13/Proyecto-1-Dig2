

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "ama22241"
#define IO_KEY       "aio_FSNG82tS9ibMQfOlDEtAhIlROicu"

/******************************* WIFI **************************************/


#define WIFI_SSID "Redmi Note 13 Pro+ 5G"
#define WIFI_PASS "5a2eucdr3b3jet8"
#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
