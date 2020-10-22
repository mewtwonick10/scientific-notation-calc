#include <stdio.h>
#include "kbhit.h"

int main(){
    float exponential;
    printf("This calculator converts scientific method into numbers\nAn example is 22.442e+2\n");
    KEYBOARD_PRESS_STANDARD();
    printf("Enter an exponential number: ");
    scanf("%f", &exponential);
    printf("The answer is %f\n", exponential);
    KEYBOARD_PRESS_CLOSE();
}