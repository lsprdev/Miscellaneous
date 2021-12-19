#include <stdio.h>

int main(){
    //C program to convert fahrenheit to celsius and other way around.

    char c[1];
    float cel, fah;

    printf("========================================\n");
    printf("What temperature do you want to convert?\n");
    printf("========================================\n");
    printf("For Fahrenheit to Celsius type 1\n");
    printf("For Celsius to Fahrenheit type 2\n");
    printf("----------------------------------------\n");
    printf("Your choice: ");
    scanf("%s", &c);

    if(c == "1"){
        printf("You've choosed 1!");
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", fah);

        cel = (fah-32)/1.8;

        printf("%f", cel);

    } else if(c == "2"){
        printf("You've choosed 2!");


        fah = 9*cel/5 + 32;
    }
    


    return 0;
}

