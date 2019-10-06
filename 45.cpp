#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[50][50];int n,i,o,O,I;scanf("%d",&n);
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++) a[i][0]=1;
    a[1][1]=1;
    I=n-2;
    for(i=1;i<n;i++)
    {
        for(O=1;O<=I;O++)
        {
            for(o=1;o<=O;o++)
            {
                a[i][o]=a[i-1][o]+a[i-1][o-1];
            }
        }
        a[i][o]=1;
    }
    O=1;
    for(i=0;i<n;i++)
    {
        for(o=0;o<O;o++) printf("%d ",a[i][o]);
        O++;printf("\n");
    }
    return 0;
}
