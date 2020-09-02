#include <stdio.h>

///
/// \param frequency frequency (in hz) for the sine wave to be output
/// \param sample_rate the rate (in hz) at which the sine wave will be sampled
/// \param time_duration the amount of time (s) for which the wave will be output
void gensine(float frequency, float sample_rate, float time_duration){ // function which will output the y-coordinates of a sine wave given these parameters
    printf("%0.1lf %0.1lf %0.1lf", frequency, sample_rate, time_duration);  
}