#include <stdio.h>

int main() {
    int num1, num2, difference;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Subtract the second number from the first one
    difference = num1 - num2;

    // Display the result
    printf("The difference of %d and %d is: %d\n", num1, num2, difference);

    return 0;
}

