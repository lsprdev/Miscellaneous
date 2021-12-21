#include <stdio.h>

// Problem 1
// Write a swap() function with the following function header:
// void swap(int *p1, int *p2);
// Use this function to swap the values of two integers.
// int main(){
//     int x = 10;
//     int y = 20;
//      // You must figure out how to call the function correctly!
//     swap(...)
//     // Should print out x: 20, y: 10
//     printf("x: %d, y: %d\n", x, y);
// }

void swap(int *p1v, int *p2v){

    *p1v = 20;
    *p2v = 10;

}

int main(){

    int x = 10;
    int y = 20;
    int *p1, *p2;
    p1 = &x;
    p2 = &y;
    
    printf("x: %d, y: %d\n", x, y);

    swap(p1, p2);

    // Should print out x: 20, y: 10
    printf("x: %d, y: %d\n", x, y);

    return 0;
}