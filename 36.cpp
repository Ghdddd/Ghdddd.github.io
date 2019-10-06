#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,t,p=0,i=0,I;scanf("%d",&n);
    for( ;n>0;n--)
    {
        scanf("%d",&t);i++;
        if(p<t)
        {
            p=t;I=i;
        }
    }
    printf("%d %d",p,I);
    return 0;
}
