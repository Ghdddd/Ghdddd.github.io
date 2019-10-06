#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int o=0,i,c,n,m,M,a[20],b[20],k=1000000;
    scanf("%d",&n);scanf("%d",&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n+m;i++)
    {
        for(c=0;c<n;c++)
        {
            if(k>a[c])
            {
                k=a[c];M=c;
            }
        }
        for(c=0;c<m;c++)
        {
            if(k>b[c])
            {
                k=b[c];M=c;o=1;
            }
        }
        printf("%d ",k);k=10000000;
        if(o) b[M]=10000000;
        else a[M]=100000000;
        o=0;
    }
    return 0;
}
