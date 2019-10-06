#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d;scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0) printf("No solution.");
    else printf("x1=%.5f x2=%.5f",(-b-sqrt(d))/2*a,(-b+sqrt(d))/2*a);
    return 0;
}
