#include<stdio.h>
int main()
{
    int n;


    printf("input number");
    inp:   //used for goto
    scanf("%d" , &n );
    int i = 3;
    do
    {
        if(n%3==0){

            printf("\n %d" ,i );
            i = i + 3 ;

        }
        else{
            printf("no. again");
            goto inp;

        }

    } while (i<=n);
    

    return 0;
}
