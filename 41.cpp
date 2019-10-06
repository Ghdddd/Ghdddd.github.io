#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int o,i,c,n,m,M,a[20],b[20],k=1000000;
    scanf("%d",&n);scanf("%d",&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    o=0;i=0;
    for( ;o<n&&i<m;)
    {
        if(a[o]>b[i])
        {
            printf("%d ",b[i]);i++;
        }
        else
        {
            if(a[o]==b[i])
            {
                printf("%d %d ",a[o],b[i]);
                o++;i++;
            }
            else printf("%d ",a[o]);o++;
        }
    }
    if(o<n) for( ;o<n;o++) printf("%d ",a[o]);
    if(i<m) for( ;i<m;i++) printf("%d ",b[i]);
    return 0;
}
