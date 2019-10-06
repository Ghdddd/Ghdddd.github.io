#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double n,N=0,i=1;scanf("%lf",&n);
    while(N<n)
    {
        N=N+1/i;i=i+1;
    }
    printf("%.0f",i-1);
    return 0;
}
