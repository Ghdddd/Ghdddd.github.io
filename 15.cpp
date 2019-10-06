#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double r,h,x,y,z,t;scanf("%lf %lf %lf %lf",&r,&h,&x,&y);
    t=sqrt(x*x+y*y);
    if(t>=r) printf("0");
    else
    {
        z=(r-t)*h/r;printf("%.5f",z);
    }
    return 0;
}
