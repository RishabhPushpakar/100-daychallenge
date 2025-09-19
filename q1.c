// Q.Write a program to input two numbers and display their sum.

#include <stdio.h>
 int main()
  {
    int num1, num2, num3, num4, sum1, sum2;

    // take inpute from the user
    printf("Enter first number: ");
    scanf("%d" , &num1);

    printf("Enter second number: ");
    scanf("%d" , &num2);

    // calculating sum
    sum1 = num1 + num2;

    // display the result
    printf("The sum of first two no. is: %d\n" , sum1);

    printf("Enter third number: ");
    scanf("%d" , &num3);

    printf("Enter fourth number:");
    scanf("%d" , &num4);

    sum2 = num3 + num4;

    printf("The sum of last two no. is: %d\n" , sum2);

return 0;
 }