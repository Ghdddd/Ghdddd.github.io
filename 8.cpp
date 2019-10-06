#include <stdio.h>

int main()
{
    int a;scanf("%d",&a);
    if(a%4==0&&a>0)
        {
            if(a%100) printf("Yes.");
            else
            {
                if(a%400==0) printf("Yes.");
                else printf("No.");
            }
        }
    if(a<0)
    {
        a=-a;
        if(a%4==1)
        {
            if(a%100!=1) printf("Yes.");
            else
            {
                if(a%400==1) printf("Yes.");
                else printf("No.");
            }
        }
    }
    return 0;
}
