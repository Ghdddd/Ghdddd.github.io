#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i,c,n,m,M,l,k=0;char a[20],b[20];scanf("%d",&n);memset(a,0,sizeof(a));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&b[0]);
    for(i=0;i<n;i++)
    {
        for(m=0; ;m++)
        {
            if(a[i]>b[0]) break;
            if(b[m-1]>a[i]&&a[i]>b[m]) break;
        }
        l=strlen(a);
        for( ;m<l;l--) b[l]=b[l-1];
        b[m]=a[i];
    }
    for(i=0;i<n+1;i++) printf("%d ",b[i]);
    return 0;
}
