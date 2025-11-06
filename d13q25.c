// Q. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input operator and two numbers
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to skip newline
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation using switch-case
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error! Division by zero.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
