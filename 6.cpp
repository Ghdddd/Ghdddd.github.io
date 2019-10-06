#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,s,S;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.5f %.0f",S,a+b+c);
    return 0;
}
