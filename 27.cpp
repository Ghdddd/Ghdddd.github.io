#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double a=-10,b=0,c=10,x,N,A,B,m=10;N=2*x*x*x-4*x*x+3*x-6;
    while(m)
    {
        A=2*a*a*a-4*a*a+3*a-6;B=2*b*b*b-4*b*b+3*b-6;
        if(A*B==0) break;
        if(A*B>0)
        {
            a=b;b=(a+c)/2;
        }
        else
        {
            c=b;b=(a+c)/2;
        }
        m--;
    }
    printf("%.2f",b);
    return 0;
}
