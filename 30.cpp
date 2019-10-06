#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,c,m=1;scanf("%d %d",&a,&b);
    if(a<b)
    {
        c=a;a=b;b=c;
    }
    while(m)
    {
        c=a%b;
        if(c==0) break;
        else
        {
            a=b;b=c;
        }
    }
    printf("%d",b);
    return 0;
}
