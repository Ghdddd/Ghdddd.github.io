#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double x,y;scanf("%lf",&x);
    y=(1<=x<=10?x+2:x-1);printf("%.1f",y);
    return 0;
}
