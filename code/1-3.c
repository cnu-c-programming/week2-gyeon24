#include <stdio.h>

/*
    int: 1 2 3
    out: 1 2 3.000000
    */
int main()
{
    int v1 = 1, v2 = 2, v3 = 3;
    printf("%d %d %.6f\n", v1, v2, (double)v3);
    
    return 0;
}
