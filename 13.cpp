#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char i,a[6];scanf("%s",a);
    i=strlen(a);i--;
    while(i>=0)
    {
        printf("%c",a[i]);
        i--;
    }
    return 0;
}
