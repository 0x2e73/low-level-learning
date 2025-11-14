#include <stdio.h>

int main(void){
    int fahrenheitArray[5] = {1,20,40,60,120, 220};

    for(int i = 0; i < sizeof(fahrenheitArray); i++ ){
        int fToCelcius = (5 / 9) * (fahrenheitArray[i] - 32);
        printf("Value ", fahrenheitArray[i], " in celcius is ", fToCelcius);
    }

    return 0;
}