#include <stdio.h>

int main() {

    //simple calculator program

    char operator = "\0";
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf\n", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c\n", &operator); // clear \n from the input buffer

    printf("Enter the second number: ");
    scanf("%lf\n", &num2);

    switch (operator)
    {
    case '+': /* addition */
        /* code */
        result = num1 + num2;
        break;

    case '-': /* subtraction */
        /* code */
        result = num1 - num2;
        break;

    case '*': /* multiplication */
        /* code */
        result = num1 * num2;
        break;

    case '/': /* division */
        /* code */
        if (num2 == 0) {
            printf("You cannot divide by zero.\n");
        } else {
            result = num1 / num2;
        }
        break;
    
    default:
        // Handle invalid operator
        printf("Error: Invalid operator.\n");
        break;
    }

    printf("Result: %.4f\n", result);
 
    return 0;
}