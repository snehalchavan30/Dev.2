#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case: Factorial of 0 is 1
    if (n == 0) {
        return 1;
    } 
    // Recursive case: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long result = factorial(num);
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}
