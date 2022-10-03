#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an Operator (+ - /  *): ");
    scanf("%C", &operator);

    printf("Enter Number 1: ");
    scanf("%lf", &num1);

    printf("Enter Number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result of Mathematical Calculation: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result of Mathematical Calculation: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result of Mathematical Calculation: %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result of Mathematical Calculation: %.2lf", result);
            break;
        default:
            printf("%C is not valid", operator);
    }

    return 0;
}