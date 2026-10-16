#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int *ptr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}