#include <stdio.h>

int main(){

    int var1; //variable declaration.
    int *ip;  //pointer variable declaration.

    ip = &var1; // storing var1 memory address in pointer variable.

    printf("Memory address of var1: %x\n", &var1);
    printf("Mem address of var1 storerd in ip: %x\n", ip);
    printf("Value of *ip variable: %d\n", *ip);

    return 0;
}