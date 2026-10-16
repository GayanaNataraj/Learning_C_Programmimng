#include<stdio.h>
int main(){
    int n=10;
    int *ptr=&n;
    int *ptr2=NULL;
    printf("%d\n",n);
    printf("%p",(void*)&ptr2);
    *ptr=*ptr+10;
    char ch='a';
    char *p='B';
    printf("%c\n",ch);
    return 0;
}

