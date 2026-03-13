#include <stdio.h>

/*
    int : 100
hex : 64
oct : 144
char : c
string : hello world!
float : 3.141592
exp : 3.141592e+00
    */

int main()
{
    int v1 = 100;
    printf("int : %d\n", v1);
    printf("hex : %x\n", v1);
    printf("oct : %o\n", v1);

    char v2 = 'c';
    printf("char : %c\n", v2);

    char* v3 = "hello world!";
    printf("string : %s\n", v3);

    float v4 = 3.141592;
    printf("float : %f\n", v4);
    printf("exp : %e\n", v4);

    return 0;
}
