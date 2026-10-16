
#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    *ptr = 99; 

    printf("Output: %d\n", *ptr); 

    return 0;
}
