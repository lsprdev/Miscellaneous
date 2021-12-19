#include <stdio.h>

int main()  
{
    int a, b; // Declaring variables.
    printf("Enter the fisrt number: "); // Prompting user to enter first number.
    scanf("%d", &a); // Storing first number using scanf function.
    //%d is used to store integer values.
    //&a is used to store the address of a.

    printf("Enter the second number: "); // Prompting user to enter second number.
    scanf("%d", &b); // Storing second number using scanf function.

    printf("The sum of %d and %d is %d\n", a, b, a + b); // Printing sum of two numbers.
    return 0; // Returning 0.

}