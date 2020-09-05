#include <stdio.h>
#include "genscd.c"

int main2() {
    char phoneNumber[10];
    printf("Input the 10-digit telephone number separated by  spaces\n");
    scanf("%c %c %c %c %c %c %c %c %c %c", phoneNumber[0], phoneNumber[1],
          phoneNumber[2], phoneNumber[3], phoneNumber[4], phoneNumber[5], phoneNumber[6],
          phoneNumber[7], phoneNumber[8], phoneNumber[9]);
    printf("\n");

    printStandardTones(phoneNumber[0]);
    for(int i = 1; i < 10; i++){
        silence(8000, .25);
        printStandardTones(phoneNumber[i]);
    }
    return 0;
}