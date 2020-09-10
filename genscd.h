// getOutputArray will take a frequency, sample rate, and time duration and return an array of the outputs
// of the sine function with given frequency at each time interval (1/sample_rate seconds) for the duration 
float * getOutputArray(float frequency, float sample_rate, float time_duration);

// gensine will output the values of a sine function with frequency given sampled at the given rate to standard out
void gensine(float frequency, float sample_rate, float time_duration);

// this function will output silence to the standard out for the specified duration 
void silence(float sample_rate, float time_duration);

// prints to standard out the tone specified by the character
void printStandardTones(char c);
