#include <stdio.h>
#include "genscd.c"

// This program will take a 10 digit telephone number and prints to standard out the DTMF tones and 
// silence that would dial that number
int main() {
    char phoneNumber[10];
    printf("Input the 10-digit telephone number\n");

    scanf("%s", phoneNumber);
    
    printf("\n");

    // This loop will print the standard tones for each digit in the phone number separated by a silent pause
    printStandardTones(phoneNumber[0]);
    for(int i = 1; i < 10; i++){
        silence(8000, .25);
        printStandardTones(phoneNumber[i]);
    }
    return 0;
}
