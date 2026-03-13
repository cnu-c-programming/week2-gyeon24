#include <stdio.h>
#include <stdbool.h>

bool test(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (test(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}
