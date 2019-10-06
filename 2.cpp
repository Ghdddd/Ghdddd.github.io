#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d",a*b*c,(a*b+b*c+c*a)*2);
    return 0;
}
