#include <stdio.h>

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    
    int t0 = 0, t1 = 1, t2 = 1;
    
    for (int i = 3; i <= n; i++) {
        int tNext = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = tNext;
    }
    
    return t2;
}

int main() {
    int test1 = 4;
    int test2 = 25;
    
    printf("Tribonacci(%d) = %d\n", test1, tribonacci(test1));
    printf("Tribonacci(%d) = %d\n", test2, tribonacci(test2));
    
    return 0;
}
