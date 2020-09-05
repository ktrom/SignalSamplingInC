#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
///
/// \param frequency frequency (in hz) for the sine wave to be output
/// \param sample_rate the rate (in hz) at which the sine wave will be sampled
/// \param time_duration the amount of time (s) for which the wave will be output

float * getOutputArray(float frequency, float sample_rate, float time_duration){
    float time_step = 1/sample_rate;
    float * outputs;

    outputs = (float *) malloc((int)(time_duration / time_step)* sizeof(float));
    for(int i = 0; i*time_step <= time_duration; i++)
    {
       outputs[i] = sin(2*M_PI*frequency*i*time_step);
    }
    return outputs;
}
void gensine(float frequency, float sample_rate, float time_duration){ // function which will output the y-coordinates of a sine wave given these parameters
    float * outputs;
    outputs = getOutputArray(frequency, sample_rate, time_duration);
    for(int i = 0; i < time_duration*sample_rate; i++){
         printf("%0.4f\n", outputs[i]);
    }
}

void silence(float sample_rate, float time_duration){ // function which will output the y-coordinates of a sine wave given these parameters
    for(int i = 0; i < time_duration*sample_rate; i++){
        printf("%0.1f\n", 0.0);
    }
}
void printStandardTones(char c){
    double tones[2][4] = {
            {1209.0, 1336.0, 1477.0, 1633.0},
            {697.0, 770.0, 852.0, 941.0},
    };
    float sample_rate = 8000;
    float time_duration = .5;
    float * outputArray1, * outputArray2;

    switch (c){
        case '1':
            outputArray1 = getOutputArray(697, 8000, .5);
            outputArray2 = getOutputArray(1209, 8000, .5);
            break;
        case '2':
            outputArray1 = getOutputArray(697, 8000, .5);
            outputArray2 = getOutputArray(1336, 8000, .5);
            break;
        case '3':
            outputArray1 = getOutputArray(697, 8000, .5);
            outputArray2 = getOutputArray(1477, 8000, .5);
            break;
        case 'A':
            outputArray1 = getOutputArray(697, 8000, .5);
            outputArray2 = getOutputArray(1633, 8000, .5);
            break;
        case '4':
            outputArray1 = getOutputArray(770, 8000, .5);
            outputArray2 = getOutputArray(1209, 8000, .5);
            break;
        case '5':
            outputArray1 = getOutputArray(770, 8000, .5);
            outputArray2 = getOutputArray(1336, 8000, .5);
            break;
        case '6':
            outputArray1 = getOutputArray(770, 8000, .5);
            outputArray2 = getOutputArray(1477, 8000, .5);
            break;
        case 'B':
            outputArray1 = getOutputArray(770, 8000, .5);
            outputArray2 = getOutputArray(1633, 8000, .5);
            break;
        case '7':
            outputArray1 = getOutputArray(852, 8000, .5);
            outputArray2 = getOutputArray(1209, 8000, .5);
            break;
        case '8':
            outputArray1 = getOutputArray(852, 8000, .5);
            outputArray2 = getOutputArray(1336, 8000, .5);
            break;
        case '9':
            outputArray1 = getOutputArray(852, 8000, .5);
            outputArray2 = getOutputArray(1477, 8000, .5);
            break;
        case 'C':
            outputArray1 = getOutputArray(852, 8000, .5);
            outputArray2 = getOutputArray(1633, 8000, .5);
            break;
        case '*':
            outputArray1 = getOutputArray(941, 8000, .5);
            outputArray2 = getOutputArray(1209, 8000, .5);
            break;
        case '0':
            outputArray1 = getOutputArray(941, 8000, .5);
            outputArray2 = getOutputArray(1336, 8000, .5);
            break;
        case '#':
            outputArray1 = getOutputArray(941, 8000, .5);
            outputArray2 = getOutputArray(1477, 8000, .5);
            break;
        case 'D':
            outputArray1 = getOutputArray(941, 8000, .5);
            outputArray2 = getOutputArray(1633, 8000, .5);
            break;
    }

    float * resultantArray = (float *) malloc((int)(time_duration * sample_rate)* sizeof(float));
    for(int i = 0; i < time_duration * sample_rate; i++){
        resultantArray[i] = (outputArray1[i] + outputArray2[i])/2;
    }

}