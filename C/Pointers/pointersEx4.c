#include <stdio.h>

int main(){
    //Learning C Pointers

    int a = 1; //Declares normal var.
    int *ptr;  //Declares pointer.

    ptr = &a; //Stores "a" address into the pointer "ptr".

    printf("%d\n", a); //Prints a.

    printf("Type a number: ");
    scanf("%d", ptr); /*
    Here's the interesting part, in order to store a value into a variable I need to
    get the memory address of it, as I stored "a" address(&a) into the "ptr" pointer
    (ptr = &a;) I can use scanf like 'scanf("%d", ptr)' instead of 'scanf("%d", &a)'.
    */
    printf("%d\n", a); //Prints the new value stored in the "a" var

    return 0;
}