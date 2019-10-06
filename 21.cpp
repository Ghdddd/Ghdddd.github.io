#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a;scanf("%d",&a);
    do
    {
        printf("%d",a);
    }
    while(~scanf("%d",&a)&&a!=-1);
    return 0;
}
