#include <stdio.h>

int main()
{
    //Statements:
    //Make a calculator that can add(+), subtract(-), multiply(*) and divide(/).
    //The user will enter the first number.
    //The user will enter the second number.
    //The user will enter the operation.
    //The calculator will do the operation and display the result.
    //The calculator will keep asking for numbers and operations until the user enters q.

    //Declaring variables:
    int num1, num2, result; 
    char op; //a = add, s = subtract, m = multiply, d = divide

    //Prompting user for input:
    printf("================================================\n");
    printf("What operation are you going to use?\n"); //Prompting user for operation
    printf("a = add, s = subtract, m = multiply, d = divide.\n\n"); //Prompting user choices
    printf("Enter your choice: "); //Prompting user for input
    scanf(" %c", &op); //%c is for character input
    printf("================================================\n");

    if(op == 'a'){ //if user enters a(add)
        printf("You chose to add!\n\n"); //displaying user choice
        printf("Enter your first number: "); //Prompting user for first number
        scanf("%d", &num1); //%d is for integer input
        printf("Enter your second number: "); //Prompting user for second number
        scanf("%d", &num2); //%d is for integer input
        result = num1 + num2; //adds the two numbers
        printf("**The result is %d**\n", result); //Displays the result
        printf("================================================\n");
    }
    else if(op == 's') //if user enters s(subtract)
    {
        printf("You chose to subtract!\n\n"); //displaying user choice
        printf("Enter your first number: "); //Prompting user for first number
        scanf("%d", &num1); //%d is for integer input
        printf("Enter your second number: "); //Prompting user for second number
        scanf("%d", &num2); //%d is for integer input
        result = num1 - num2; //subtracts the two numbers
        printf("**The result is %d**\n", result); //Displays the result
        printf("================================================\n");
    }
    else if(op == 'm') //if user enters m(multiply)
    {
        printf("You chose to multiply!\n\n"); //displaying user choice
        printf("Enter your first number: "); //Prompting user for first number
        scanf("%d", &num1); //%d is for integer input
        printf("Enter your second number: "); //Prompting user for second number
        scanf("%d", &num2); //%d is for integer input
        result = num1 * num2; //multiplies the two numbers
        printf("**The result is %d**\n", result); //Displays the result
        printf("================================================\n");
    }
    else if(op == 'd') //if user enters d(divide)
    {
        printf("You chose to divide!\n\n"); //displaying user choice
        printf("Enter your first number: "); //Prompting user for first number
        scanf("%d", &num1); //%d is for integer input
        printf("Enter your second number: "); //Prompting user for second number
        scanf("%d", &num2); //%d is for integer input
        result = num1 / num2; //divides the two numbers
        printf("**The result is %d**\n", result); //Displays the result
        printf("================================================\n");
    }
    else //if user enters anything else
    {
        printf("You did not enter a valid choice!\n"); //displaying user choice
        printf("Please, try again.\n"); //Displays error message
        printf("================================================\n");
    }

    printf("Thank you for using my calculator!\n"); //Displays thank you message
    printf("Made by: Gabriel L. Pereira\n"); //Displays author
    printf("Please visit my github: github.com/OGabrielPereira\n"); //Displays github link
    printf("================================================\n");
    return 0;
}