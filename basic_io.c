#include <stdio.h>
/*
This program is an example of how we pass variables around to different functions, and these funcitons
can perform different calculations on our values stored in our variables. Computer programs consist of 
some form of input, some computation or manipulation, and some form of output.
*/

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform division
float divide(float a, float b) {
    return a / b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    float num3, num4;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num3, &num4);

    int sum = add(num1, num2);
    int difference = subtract(num1, num2);
    float quotient = divide(num3, num4);
    int product = multiply(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Quotient: %.2f\n", quotient);
    printf("Product: %d\n", product);

    return 0;
}
