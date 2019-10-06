#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i,n,m,a[20];scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i-1]<m&&m<a[i]) printf("%d ",m);
        printf("%d ",a[i]);
    }
    return 0;
}
