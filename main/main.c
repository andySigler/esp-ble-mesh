#include <stdlib.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"

static const char *TAG = "MAIN";

static void _setup_logging(void);

void app_main(void) {
  _setup_logging();
}

static void _setup_logging(void) {
  esp_log_level_set("*", ESP_LOG_WARN); // all default to WARN level
  esp_log_level_set(TAG, ESP_LOG_VERBOSE);
}
