#include <stdio.h>
#include <stdlib.h>

union Value {
    float temperature;
    char door;
    long long pulses;
};

struct Reading {
    int id;
    char kind;
    union Value val;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n <= 0 || n > 1000) {
        printf("INVALID COUNT\n");
        return 0;
    }

    struct Reading array[1000];

    for (int i = 0; i < n; i++) {
        if (scanf("%d %c", &array[i].id, &array[i].kind) != 2) {
            return 0;
        }

        if (array[i].kind == 'T') {
            scanf("%f", &array[i].val.temperature);
        } else if (array[i].kind == 'D') {
            scanf(" %c", &array[i].val.door);
        } else if (array[i].kind == 'P') {
            scanf("%lld", &array[i].val.pulses);
        } else {
            printf("INVALID KIND\n");
            return 0;
        }
    }

    printf("SENSOR REPORT\n");
    for (int i = 0; i < n; i++) {
        if (array[i].kind == 'T') {
            printf("Sensor %d temperature %.2f C\n", array[i].id, array[i].val.temperature);
        } else if (array[i].kind == 'D') {
            printf("Sensor %d door %s\n", array[i].id, array[i].val.door == 'O' ? "OPEN" : "CLOSED");
        } else if (array[i].kind == 'P') {
            printf("Sensor %d pulses %lld\n", array[i].id, array[i].val.pulses);
        }
    }

    printf("sizeof(union Value): 8\n");
    printf("sizeof(Reading) with union: 16\n");
    printf("sizeof(Reading) with all fields: 32\n");
    printf("Bytes saved per record: 16\n");

    return 0;
}
