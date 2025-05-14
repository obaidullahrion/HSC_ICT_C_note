#include <stdio.h>
#include <math.h>


//switch instead of if func

int main()
{
    int j;
    int i = 2;
    j = pow(i , 3);
    switch (j)
    {
    case 8:
            printf("%d \n %d" , i , j) ;
        break;
    
    default:
            printf("%d" , i);
        break;
    }







    return 0;
}
