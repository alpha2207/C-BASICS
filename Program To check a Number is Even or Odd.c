#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d", &num);
if(num % 2 == 0)
    printf("%d is a even number.",num);
else 
    printf("%d is a odd number.",num);
    return 0;
    }
