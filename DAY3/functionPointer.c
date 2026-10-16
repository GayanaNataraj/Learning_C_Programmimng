#include<stdio.h>
int add(int a, int b){
    return a+b;
}       
int main(){
    int (*ptr)(int,int)=add;
    int x=10;
    int y=20;
    const int *const p=&x;
    // *p=50; // This would cause a compilation error since p is a pointer to a constant integer
    //p=&y; // This would cause a compilation error since p is a constant pointer#
    printf("%d\n",x);
    printf("%d\n",ptr(10,20));
}
