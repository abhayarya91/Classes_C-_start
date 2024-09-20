#include <stdio.h>

int main() {
    // Declare variables
    int N;
    char S[100]; 
    // Read input
    //printf("Enter integer N: ");
    scanf("%d", &N);

    //printf("Enter string S: ");
    scanf(" %[^\n]s", S); // Read the string with spaces

    // Output the result
    printf("%d\n", N * 2);
    printf("%s\n", S);

    return 0;
}

