#include <stdio.h>
#include <math.h>
#include <string.h>

int fun(int n)
{
    if(n==0) return 0;
    else
    {
        if(n==1||n==2) return 1;
        else
        {
            return fun(n-1)+fun(n-2);
        }
    }
}

int main(void)
{
    int n,i=0,f=1;scanf("%d",&n);
    while(i<n)
    {
        if(f) f=0;
        else printf(",");
        printf("%d",fun(i));
        i++;
    }
    return 0;
}
