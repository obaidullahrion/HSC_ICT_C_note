#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n , i ;
    printf("quantity: ");
    scanf("%d" , &n);

    for(i=1;i<n ; i++){

    printf("%d + " , i);

    }
    printf("%d" , n);


}
