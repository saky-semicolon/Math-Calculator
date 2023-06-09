#include <stdio.h>

int main()
{
    char name[50];
    float num1, num2;

    printf("Welcome to Math Calculator.\n");
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s!\n", name);
    printf("Enter two numbers.\n");
    printf("First Number: ");
    scanf("%f", &num1);
    printf("Second Number: ");
    scanf("%f", &num2);

    printf("You have entered %.2lf and %.2lf\n", num1, num2);
    printf("Performing calculations...\n");

    // Addition
    float sum = num1 + num2;
    printf("The Addition of %.2lf and %.2lf is = %.2lf\n", num1, num2, sum);

    // Subtraction
    float difference = num1 - num2;
    printf("The Subtraction of %.2lf and %.2lf is = %.2lf\n", num1, num2, difference);

    // Multiplication
    float product = num1 * num2;
    printf("The Product of %.2lf and %.2lf is = %.2lf\n", num1, num2, product);

    // Division
    if (num2 != 0)
    {
        float quotient = num1 / num2;
        printf("The Quotient of %.2lf and %.2lf is = %.2lf\n", num1, num2, quotient);
    }
    else
    {
        printf("Cannot divided by zero.\n");
    }

    printf("Thank you for using Math Calculator!\n");

    return 0;
}
