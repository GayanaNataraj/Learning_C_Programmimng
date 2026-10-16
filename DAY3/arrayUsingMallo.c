#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0,sum=0;
    int *arr = malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\nSum: %d\n", sum);
    free(arr);
    return 0;
}