#include <stdio.h>
#include "genscd.c"

int main() {
    float frequency = 0;
    float sample_rate = 0;
    float time_duration = 0;

    printf("Input the frequency in hz, sample rate in hz, and time duration in seconds for which you want an output sine wave\n");
    scanf("%f %f %f", &frequency, &sample_rate, &time_duration);

    gensine(frequency, sample_rate, time_duration); // feeds the variables into the function which will display output values
    return 0;
}