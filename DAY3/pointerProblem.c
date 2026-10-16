#include<stdio.h>
#include<stddef.h>
int main(){
int arr[5]={1,2,3,4,5};
int *p=&arr[1];
int *q=&arr[4];
int result=q-p;
printf("%d\n",result);
}