#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("enter the number\n");
    scanf("%d",&i);
    if(i>0)
    {
    printf("i>0");
    }
    else if(i<0)
    {
     printf("i<0");
    }
    else
    {
        printf("i=0");
    }


    return 0;
}
