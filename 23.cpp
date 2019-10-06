#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,n,N;scanf("%d %d",&a,&n);
    for(N=0;n!=0;n--)
    {
        N=N+a*n;a=a*10;
    }
    printf("%d",N);
    return 0;
}
