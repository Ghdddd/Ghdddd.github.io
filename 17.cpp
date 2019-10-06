#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b;scanf("%d %d",&a,&b);
    if(b==1|b==3|b==5|b==7|b==8|b==10|b==12) printf("31");
    if(b==4|b==6|b==9|b==11) printf("30");
    if(b==2)
    {
        if(a%4==0&&a>0)
        {
            if(a%100)
            {
                printf("29");a=0;
            }
            else
            {
                if(a%400==0) printf("29");
                else printf("28");
                a=0;
            }
        }
        if(a<0)
        {
            a=-a;
            if(a%4==1)
            {
                if(a%100!=1)
                {
                    printf("29");a=0;
                }
                else
                {
                    if(a%400==1) printf("29");
                    else printf("28");
                    a=0;
                }
            }
        }
        if(a) printf("28");
    }
    return 0;
}
