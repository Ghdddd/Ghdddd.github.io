#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,n,N,i;scanf("%d",&n);
    for(N=0;n!=0;n--)
    {
        a=1;
        for(i=n;i!=0;i--)
        {
            a=a*i;
        }
        N=N+a;
    }
    printf("%d",N);
    return 0;
}
