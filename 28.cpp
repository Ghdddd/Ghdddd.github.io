#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a=1,b=0,c=0,n;
    for( ;a<=9;a++)
    {
        for( ;b<=9;b++)
        {
            for(n=0;c<=9;c++)
            {
                n=a*100+b*10+c;
                if(n==a*a*a+b*b*b+c*c*c) printf("%d\n",n);
            }
            c=0;
        }
        b=0;
    }
    return 0;
}
