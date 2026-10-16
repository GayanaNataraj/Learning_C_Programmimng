#include<stdio.h>
int jumpCheck(int nums[] ,int n){
    int jumps=0;
    int currentEnd=0;
    int maxReach=0;
    for(int i=0;i<n-1;i++){
        int CurrentReach=i+nums[i];
        if(CurrentReach>maxReach){
            maxReach=CurrentReach;
        }
        if(i==currentEnd){
            jumps++;
            currentEnd=maxReach;
        }
        return jumps;
    }
}

int main(){
    int nums[]={2,1,0,5};
    int n=sizeof(nums)/sizeof(int);
    printf("%d",jumpCheck(nums,n));
    
}   