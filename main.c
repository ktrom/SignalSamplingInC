#include <stdio.h>
#include "genscd.c"

int main() {
    char phoneNumber[10];
    printf("Input the 10-digit telephone number separated by spaces\n");

    scanf("%s", phoneNumber);
    printf("%s", phoneNumber);

    printf("\n");

    silence(8000, .25);
    // printStandardTones(phoneNumber[0]);
    for(int i = 1; i < 10; i++){
        silence(8000, .25);
        printStandardTones(phoneNumber[i]);
    }
    return 0;
//    float frequency = 0;
//    float sample_rate = 0;
//    float time_duration = 0;
//
//    printf("Input the frequency in hz, sample rate in hz, and time duration in seconds for which you want an output sine wave\n");
//    scanf("%f %f %f", &frequency, &sample_rate, &time_duration);
//    printf("\n");
//    gensine(frequency, sample_rate, time_duration); // feeds the variables into the function which will display output values
//    return 0;
}