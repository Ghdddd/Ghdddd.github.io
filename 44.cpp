#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int o=0,i,c,n,m,M,k=10;int a[20]={1,2,3,4,5,6,7,8,9};
    scanf("%d",&n);
    i=10;i--;
    while(k!=0)
    {
        c=(o+i)/2;
        if(a[c]>n) i=c-1;
        if(a[c]==n) break;
        if(a[c]<n) o=c+1;
        k--;
    }
    printf("a[%d]",c);
    return 0;
}
