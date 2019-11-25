#include <stdio.h>
void somaDez(int *x)
{   
    *x = *x + 10;
}

int main()
{
    int n;
    n = 2;
    
    somaDez(&n);

    printf("%d\n\n",n);
    getchar();
    return 0;
}