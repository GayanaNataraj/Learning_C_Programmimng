#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else { 
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
##basic operators
1.2235
2.2469
3.1716
4.2413

##conditionals
1.fizzbuzz
2.three divisors
3.number of good pairs
4.leetcode 1832

##digital manipulation
1.reverse integer 7
2.1281

##nested loops
1.204
2.509
*/
