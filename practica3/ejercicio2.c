#include <stdio.h>

int main()
{
    int x, num, y=0;
    printf("escribe el limite superior\n");
    scanf("%d",&num);
    if(num>0)
    {
        for(x=1;x<=num;x+=2)
        {
            y+=x;
            printf("%d \n", x);
        }
        printf("el total sumado es:%d \n",y);
    }
    else if(num<0){
        for(x=-1;x>=num;x-=2)
        {
            y+=x;
            printf("%d \n",x);
        }
        printf("el total sumado es:%d \n",y);
    }
    else 
    printf("ingresaste 0\n");
    return 0;
}