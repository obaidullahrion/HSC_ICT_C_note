#include <stdio.h>

int main() {
    int number, i;
    int factorial = 1;


    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

 
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }


    printf("Factorial of %d is %d\n", number, factorial);

    return 0;
}