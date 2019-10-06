#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b=1,i;scanf("%d",&a);
    for(i=0;b<a;b++)
    {
        if(a%b==0) i++;
    }
    if(i==1) printf("Yes.");
    else printf("No.");
    return 0;
}
