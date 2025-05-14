#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i ; 
    int sum = 0;


    for (i=5;i<=200 ; i = i+5){
        printf("%d +" , i);
        sum = sum + i ;
    }
    printf(" = %d" , sum);

    return 0;
}
