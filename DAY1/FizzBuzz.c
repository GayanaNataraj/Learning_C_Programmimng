#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0&&i%5==0){
        printf("FizzBuzz\n");
        }
        else if(i%3==0){
            printf("Fizz,");
        }
        else if(i%5==0){
            printf("Buzz,");
        }
        else{
            printf("%d,",i);
        }
    }
return 0;
}