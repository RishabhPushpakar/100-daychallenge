// Q.Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
 int main()
 {
    float num1, num2;

    //taking input
    printf("Enter first number:");
    scanf("%f" , &num1);

    printf("Enter second number:");
    scanf("%f" , &num2);

    //performing operations
    printf("The sum is: %.2f\n", num1 + num2);

    printf("The difference is: %.2f\n", num1 - num2);

    printf("The product is: %.2f\n", num1 * num2);

    //division
    if (num2 != 0) {
        printf("The quotient is: %.2f\n", num1 / num2);
    } else {
        printf("Quotient: is not defiend(devision by zero\n)");
    }
 return 0;
}