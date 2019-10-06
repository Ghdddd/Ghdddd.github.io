#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a;scanf("%d",&a);
    for( ;a;a--)
    {
        for(int i=a;i;i--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
