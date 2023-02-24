#include <stdio.h>

int main()
{
    int x=45, l;
    for(l=65; l<=90; l++)
    {
        if(l==65||l==69||l==73||l==79||l==85)
            printf("**%c** es vocal\n",l);
            else if(l==68)
                printf("$$$$$%c$$$$$ con esta letra empieza mi nombre\n",l);
                else
                    printf("-%c- es consonante\n", l);
    }
    return 0;
}
