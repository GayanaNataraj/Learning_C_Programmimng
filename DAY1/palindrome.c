/*#include<stdio.h>
int main(){
    int n, reversed = 0, original;
    scanf("%d",&n);
    original = n;
    while(n != 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if(original == reversed){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;

}
    */



#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("false");
    }
    int original=n;
    int rem=0;
    int reverse=0;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(reverse==original){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}

