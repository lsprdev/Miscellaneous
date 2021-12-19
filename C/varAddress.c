#include <stdio.h>

int main(){

    int  var1;
    float var2;
    char var3[10];

    printf("Address of var1 variable: %x\n", &var1);
    printf("Address of var2 variable: %x\n", &var2);
    printf("Address of var3 variable: %x\n", &var3);
    //ampersand(&) is used to get the address of the var.
    return 0;
}
