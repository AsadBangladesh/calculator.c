#include <stdio.h>

int main()
{
    char selectOperator;
    double firstNumber, secondNumber, finalResults;

    printf("Enter an select operator (+, -, *, /): ");
    scanf("%c", &selectOperator);

    printf("Enter first numbers: ");
    scanf("%lf", &firstNumber);

    printf("Enter second number : ");
    scanf("%lf", &secondNumber);

    switch (selectOperator)
    {
        case '+':
            finalResults = firstNumber + secondNumber;
            break;
        case '-':
            finalResults = firstNumber - secondNumber;
            break;
        case '*':
            finalResults = firstNumber * secondNumber;
            break;
        case '/':
            finalResults = firstNumber / secondNumber;
            break;
        default:
            printf("Error: Invalid operator!");
            return 1;
    }

    printf("The results is : %.1lf %c %.1lf = %.2lf", firstNumber, selectOperator, secondNumber, finalResults);

    return 0;
}

