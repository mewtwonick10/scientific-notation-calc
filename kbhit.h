#include <stdio.h>

int KEYBOARD_PRESS_STANDARD(){
    printf("Press any key to continue\n");
    while(1){
        if(_kbhit()){
            break;
        }
    }
}

int KEYBOARD_PRESS_CLOSE(){
    printf("Press any key to end this program\n");
    while(1){
        if(_kbhit()){
            break;
        }
    }
}