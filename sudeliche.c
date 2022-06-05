#include<stdio.h>

int main()
{
    int x;
    for(x = 1; x <= 15; x++)
    {
        if(x&1)
            printf("%d liché\n",x);
        else if(!(x&1))
            printf("%d sudé\n",x);
    }
    return 0;
}
