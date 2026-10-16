#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool canJump(int nums[],int n){
    //int n=sizeof(nums)/sizeof(int);
    int  maxReach=0;
    for(int i=0;i<n;i++){
        if(i>maxReach){
            return false;
           
        }
        int currentReach=i+nums[i];
        if(currentReach>maxReach){
            maxReach=currentReach;
        }
        if(maxReach>=n-1){
            
            return true;
        }
    }
return true;
}

int main(){
int nums[]={2,1,0,5};
int n=sizeof(nums)/sizeof(int);
if(canJump(nums,n)){
    printf("true");
}
else{
    printf("false");
}
}