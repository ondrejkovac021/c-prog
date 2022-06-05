#include <stdio.h>

void display();
int n = 32;
int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("%d", n);
}
