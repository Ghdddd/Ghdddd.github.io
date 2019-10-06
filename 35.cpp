#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[20][20];
    int n,m,i,o,N,p=1,I,O;scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(o=0;o<m;o++) scanf("%d",&a[i][o]);
    }
    for(i=n-1;i>=0;i--)
    {
        o=0;N=0;I=i;
        while(p)
        {
            N=N+a[I][o];
            if(I+1<n&&o+1<m)
            {
                I++;o++;
            }
            else break;
        }
        printf("%d ",N);
    }
    for(o=1;o<m;o++)
    {
        i=0;O=o;N=0;
        while(p)
        {
            N=N+a[i][O];
            if(i+1<n&&O+1<m)
            {
                i++;O++;
            }
            else break;
        }
        printf("%d ",N);
    }
    return 0;
}
