#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, x, j, n, n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    time_t t1;
    srand ((unsigned)time (&t1));
    printf("ingresa cuantas veces quieres lanzar el dado\n");
    scanf("%d",&x);
    printf("que valor te interesa?:\n");
    scanf("%d",&n);
    if(n>=7 || n<=0)
        printf("error al ingresar el numero\n");
    else
    {
        for(j=1; j<=x; j++)
        {
            num= (rand () %6) +1;
            printf("\n %d \n",num);
            if(num==1)
                n1++;
                else if(num==2)
                    n2++;
                    else if(num==3)
                        n3++;
                    else if(num==4)
                        n4++;
                        else if(num==5)
                            n5++;
                            else if(num==6)
                                n6++;
                                
                    
        }
        if(n==1)
            printf("el numero %d cayo %d veces\n", n, n1);
            else if(n==2)
                printf("el numero %d cayo %d veces\n", n, n2);
                else if(n==3)
                    printf("el numero %d cayo %d veces\n", n, n3);
                    else if(n==4)
                        printf("el numero %d cayo %d veces\n", n, n4);
                        else if(n==5)
                            printf("el numero %d cayo %d veces\n", n, n5);
                            else if(n==6)
                                printf("el numero %d cayo %d veces\n", n, n6);
                                
    }
    return 0;
}
