#include <stdio.h>
/*
    char: 1
short: 2
int: 4
unsigned int: 4
long: 8
long long: 8
float: 4
    */
int main()
{
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("unsigned int: %zu\n", sizeof(unsigned int));
    printf("long: zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    
    return 0;
}
