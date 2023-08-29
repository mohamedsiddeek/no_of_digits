#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    unsigned int n ,m=0;
    printf("enter \n");
    scanf("%i\n",&n);
    while(n>=1){
        n/=10;
        m++;
    }
    printf("the no of digits = %i",m);
    return 0;
}
