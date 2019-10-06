#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;c=a+b;
    while(n!=0)
    {
        printf("%d ",a);
        a=b;b=c;c=a+b;
        n--;
    }
    return 0;
}
