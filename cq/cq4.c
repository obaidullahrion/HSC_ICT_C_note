
#include <stdio.h>
#include <conio.h> // Include the header file for getch()
int main() {
    int num;
again:
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("%d is divisible by 3\n", num);
    } else {
        goto again;
    }
    getch();  //use getch to use a key for exit .

    return 0;
}