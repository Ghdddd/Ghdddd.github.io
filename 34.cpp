#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int i=0,a[15],h,t=0;
    while(i<10)
    {
        scanf("%d",&a[i]);i++;
    }
    scanf("%d",&h);
    h=h+30;i=0;
    while(i<10)
    {
        if(h>=a[i]) t++;
        i++;
    }
    printf("%d",t);
    return 0;
}
