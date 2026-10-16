#include<stdio.h>
int main(){
    char str[]="Banana";
    int hashfreq[26]={0};
    for(int i=0;str[i]!='\0';i++){
        int index=str[i]-'a';
        hashfreq[index]++;
    }

    for(int i=0;i<26;i++){
        if(hashfreq[i]>0){
            char ch=i+'a';
            printf("%c=%d\n",ch,hashfreq[i]);
        }
    }
}
/*
#include<stdio.h>
int main(){
    char str[]="banana";
    int hashfreq[26]={0};
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        int index=str[i]-'a';
        hashfreq[index]++;
    }

    for(int i=0;i<26;i++){
        if(hashfreq[i]>0){
            char ch=i+'a';
            printf("%c=%d\n",ch,hashfreq[i]);
        }
    }
}
*/
