#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int o,i,c,n,m,M,a[20],b[20],k=1000000;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);o=n-1;
    for(i=0;i<n;i++)
    {
        b[o-i]=a[i];
    }
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}
