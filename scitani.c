#include <stdio.h>

int total = 0;
int sum (int, int);
int main ()
{ 
    total = sum (1000, 2524);
    printf ("%d \n", total);
    return 0;
}

int sum (int a, int b)
{   
    return a + b;
}
