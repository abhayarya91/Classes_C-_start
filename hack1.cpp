#include <stdio.h>

int main() {
    // Declare variables to store the numbers
    int num1, num2;

    // Read the first number from the user
   // printf("Enter the first number: ");
    scanf("%d", &num1);

    // Read the second number from the user
    //printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform subtraction
    int result = num1 - num2;

    // Display the result
    printf("Result of subtraction: %d\n", result);

    return 0;
}

