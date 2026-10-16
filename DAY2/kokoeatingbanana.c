#include<stdio.h>
#include<stdlib.h>
    int eatingSpeed(int bunches[],int size,int h){
        int i;
        int left=1;
        int right=0;
        for( i=0;i<size;i++){
            if(bunches[i]>right){
                right=bunches[i];
            }
        }
        int speed=right;
        while(left<=right){
            int mid=(left+right)/2;
            int totalHours=0;
            for( i=0;i<size;i++){
                totalHours+=(bunches[i]+mid-1)/mid;
            }
            if(totalHours<=h){
                speed=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return speed;
    }
    int main(){
    system("cls");
    int bunches[]={3,6,7,11};
    int h=8;
    int n=sizeof(bunches)/4;
    
    printf("\n%d\n\n",eatingSpeed(bunches,n,h));
    return 0;
}
/*worst case meaning in binary search.

ceil division of a/b = (a+b-1)/b
leetcode : 
1. 12 
2.13
3.253
4.122 : use greedy
5.binary search:69 , 34, 35.


*/
