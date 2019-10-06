#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;scanf("%d",&n);
    double a=2,b=1,c,N;
    for(N=0;n!=0;n--)
    {
        N=N+a/b;
        c=a;a=a+b;b=c;
    }
    printf("%.5f",N);
    return 0;
}
