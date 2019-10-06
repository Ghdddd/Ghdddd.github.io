#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b;scanf("%d %d",&a,&b);
    if(a>=90&&b>=90) printf("great");
    else
    {
        if(a>=60||b>=60) printf("so-so");
        else printf("bad");
    }
    return 0;
}
