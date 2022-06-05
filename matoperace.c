#include <stdio.h>
int main()
{
    int a = 14,b = 23, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("zbytek po dělení = %d \n",c);
    
    return 0;
}
