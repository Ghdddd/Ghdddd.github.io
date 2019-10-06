#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,i,t,p=1;scanf("%d",&n);
    for(i=1;i!=0; )
    {
        for(t=n-i;t!=0;t--) printf(" ");
        for(t=2*i-1;t!=0;t--) printf("*");
        printf("\n\n");
        if(p) i++;
        else i--;
        if(n==i) p=0;
    }

    return 0;
}
