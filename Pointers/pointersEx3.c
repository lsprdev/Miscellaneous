#include <stdio.h>

int main(){

    int a = 1;
    int b;
    int *ptr; //Here I put a * to indicate that this variable is a pointer.

    // b = &a; //I can't do it, only if I declare b as a pointer using * after it.
    ptr = &a; /*After declaring a pointer(*) I can't use * in the program like:
                *ptr = &a; wrong.
                 ptr = &a; right.*/

    printf("Address of a: %d\n", a);   //variable
    printf("Address of a: %d\n", &a);  //var address
    printf("Address of a: %d\n", *ptr);//value that is in the address
    printf("Address of a: %d\n", ptr); //address


    return 0;
}