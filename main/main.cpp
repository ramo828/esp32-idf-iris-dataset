#include <stdio.h>
#include <cmath>
#include "neural/neural.h"
extern "C"
{
#include "driver/ledc.h"
#include "esp_err.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
}

extern "C" void app_main(void)
{
    NeuralNet neural;
    float input_data[] = {6.9, 3.1, 5.4, 2.1}; // Tahminen Setosa
    int predicted = neural.getData(input_data, false);

    const char *species_names[] = {"Setosa", "Versicolor", "Virginica"};
    printf("Tahmin edilen tür: %s\n", species_names[predicted]);
}
