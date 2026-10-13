#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
     printf("% is largest number",a);
    }
    else if(b>=a&&b>=c)
    {
     printf("% is largest number",b);
    }
    else
    {
     printf("% is largest number",c);
    }


    return 0;
}
((find the largest three numbers))
