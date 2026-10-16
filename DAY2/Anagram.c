#include<stdio.h>
#include<stdbool.h>
bool isAnagram(char*s,char *t){
    int freq[26]=0;
    int t;
    if(strlen(s)!=strlen(t)){
        return false;
    }
    for(int i=0;s[i]!='\0';i++){
        int index=s[i]-'a';
        freq[index]++;
    }
    for(int i=0;t[i]!='\0';i++){
        int index=t[i]-'a';
        freq[index]--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char s[]="eat";
    char t[]="tea";
    if(isAnagram(s,t)){
        printf("true");
    }
    else{
        printf("false");
    }
}
/*
929.
387
2351*/
