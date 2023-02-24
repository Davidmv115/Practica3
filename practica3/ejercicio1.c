#include <stdio.h>

int main()
{
    int x, num;
    printf("escribe un numero para encontrar sus factores:");
    scanf("%d",&num);
    for(x=1;x<=num;x++)
    {
    if(num%x==0)
    printf("%d, ",x);
    }
    

    return 0;
}

