#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[20][20];
    int n,m,i,o,N;scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(o=0;o<m;o++) scanf("%d",&a[i][o]);
    }
    for(o=0;o<m;o++)
    {
        N=0;
        for(i=0;i<n;i++) N=N+a[i][o];
        printf("%d ",N);
    }
    return 0;
}
