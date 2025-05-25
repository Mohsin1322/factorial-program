#include <stdio.h>

int main() {
    int number = 5;
    int factorial = 1;
    
    printf("Calculating factorial of %d\n", number);
    
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d is %d\n", number, factorial);
    
    return 0;
}
