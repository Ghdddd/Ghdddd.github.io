#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[20],d,n,i,I,m=10000000;scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=10000000;
        for(I=0;I<n;I++)
        {
            if(m>a[I])
            {
                m=a[I];d=I;
            }
        }
        printf("%d ",m);a[d]=1000000;
    }
    return 0;
}
