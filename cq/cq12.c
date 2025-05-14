#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i , n  ;
    int sum = 0 ; 
    printf("input limit");
    scanf("%d", &n );
    for(i = 2 ; i <= n ; i = i + 3  ){
        sum = sum  + i * i; 



    }
        printf("%d" , sum); 
    return 0;
}
