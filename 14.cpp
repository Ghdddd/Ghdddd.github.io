#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double a,b=0.0;scanf("%lf",&a);
    if(a>=50)
    {
        a=a-50;b=b+50*0.5;
    }
    else
    {
        b=b+a*0.5;a=0;
    }
    if(a>=50)
    {
        a=a-50;b=b+50*0.7;
    }
    else
    {
        b=b+a*0.7;a=0;
    }
    if(a) b=b+a;
    printf("%.1f",b);
    return 0;
}
