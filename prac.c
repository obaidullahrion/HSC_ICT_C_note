#include <stdio.h>

int main(){
    char name1[120];
    const int a=12;
    #define b 12
    
    float avg;

    printf("enter first  name :");
    scanf("%s" , &name1);
    printf("typed %s" , name1);
    printf("\n hi");
    printf("\t hi");

    avg = 14 + b ;

    if((avg>2) && (avg!=0))
        printf("\n %.2f" , avg);
    else
        printf("less");
    
    
    
    
    return 0;

}