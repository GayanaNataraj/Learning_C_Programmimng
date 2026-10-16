#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int num;
    char registration[100];
    double gross;
    double tare;
};

double Helper1(struct Ticket *t) {
    double netW = t->gross - t->tare;
    return netW;
}
void Helper2(struct Ticket *t){
    printf("%d ",t->num);
    printf("%s ",t->registration);
    printf("%lf %lf\n",t->gross,t->tare);
}

int main() {
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    struct Ticket *array = malloc(n * sizeof(struct Ticket));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i].num);
        scanf("%s", array[i].registration);
        scanf("%lf", &array[i].gross);
        scanf("%lf", &array[i].tare);
    }

    double total = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++) {
        double netW = Helper1(&array[i]);
        total += netW;
        if (netW > Helper1(&array[maxIndex])) {
            maxIndex = i;
        }
    }
    printf("WEIGHBRIDGE BOOK\n");
    for(int i=0;i<n;i++){
        Helper2(&array[i]);
    }

    printf("\nTotal Net Weight: %lf\n", total);
    printf("Maximum value:%lf\n", 
           Helper1(&array[maxIndex]));

    free(array);
    return 0;
}
