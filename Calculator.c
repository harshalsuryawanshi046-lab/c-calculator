#include <stdio.h>

int main () {
    float x, y;
    printf("Enter first number: ");
    scanf("%f", &x);

    char op;
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &y);

    if (op=='+') {
        printf("Result = %.2f", x+y);
    } else if (op=='-') {
        printf("Result = %.2f", x-y);
    } else if (op=='*') {
        printf("Result = %.2f", x*y);
    } else if (op=='/') {
        if (y!=0) {
            printf("Result = %.2f", x/y);
        } else {
            printf("Undefined");
        }
    } else {
        printf("Invalid operator");
    }
    
 
    return 0;
}