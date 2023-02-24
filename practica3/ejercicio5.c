#include <stdio.h>
#include <stdlib.h>
int main()
{
int a, b,x=5,n;
    for(b=1; b<=4; b++){
        
    for (a=1; a<=10; a++){
        printf("*");
    }
    printf("\n");
    }
    printf("\n");
    for(b=1;b<=5;b++){
        
        for(a=1; a<=b; a+=1){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
        for(b=1;b<=x;b++)
    {
        for(a=1;a<=x-b;a++)
        {
            printf(" ");
        }
        for(a=1;a<=b;a+=1)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    for(b=1; b<=x;b++)
    {
        for(a=1; a<=x-b; a++)
        {
            printf(" ");
        }
        for(a=1; a<=2*b-1;a++)
        {
            printf("*");
        }
            printf("\n");
    }
    printf("\n");
    
    for(b=1; b<=x; b++)
    {
        for(a=1; a<=x-b; a++)
        {
            printf(" ");
        }
        for(a=1;a<=2*b-1;a++){
            printf("%d",b);
        }
        printf("\n");
    }
    printf("\n");
    
    for(b=1;b<=x;b++)
    {
        for(a=1;a<=x-b;a++)
        {
            printf(" ");
        }
        for(a=1; a<=2*b-1; a++){
            n=b-a;
            printf("%d",abs(n));
        }
        printf("\n");
}
    return 0;
}
