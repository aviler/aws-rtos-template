/**
 * @file main.c
 * 
 * @brief aws-rtos-template application entry point.
 */

#include "FreeRTOS.h"
#include "task.h"
#include "esp_log.h"

/* Demonstrate use of components */
#include <foo.h>

#define TAG "TEMPLATE"
#define STACK_DEPTH 4096
#define TASK_PRIORITY 5

const uint32_t delay_ticks = 500 / portTICK_RATE_MS;

/**
 * @brief Task example
 */
void template_task(void *arg) {
    while (1) {
        ESP_LOGI(TAG, ".");
        vTaskDelay(delay_ticks);
    }
}

/**
 * @brief Application entry point
 *
 * @return int
 */
int app_main( void )
{
    ESP_LOGI(TAG, "Running...");
    xTaskCreate(template_task, "TEMPLATE TASK", STACK_DEPTH, NULL, TASK_PRIORITY, NULL);
    
    return 0;
}
