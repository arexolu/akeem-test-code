#include <stdio.h>

// Function to calculate the factorial of a number
long long int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    
    // Ask the user for a number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    // Calculate the factorial
    printf("The factorial of %d is %lld\n", num, factorial(num));
    
    return 0;
}

