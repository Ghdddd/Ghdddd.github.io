#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int o,i,c,n,m,M,a[20],b[20],k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    while(k)
    {
        M=0;
        for(i=0;i<n;i=i+1)
        {
            if(a[i]>a[i+1])
            {
                c=a[i];a[i]=a[i+1];a[i+1]=c;M++;
            }
        }
        if(M==0) break;
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
