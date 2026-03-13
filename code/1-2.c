#include <stdio.h>
/*
          name         id      value
       kim 0000000012       4.12
       lee 0000001922       3.21
      park 0000000432       1.00
    */
int main()
{
    printf("%10s %10s %10s\n", "name", "id", "value");
    printf("%10s %010d %10.2f\n", "kim", 12, 4.12);
    printf("%10s %010d %10.2f\n", "lee", 1922, 3.21);
    printf("%10s %010d %10.2f\n", "park", 432, 1.00);
    
    return 0;
}
