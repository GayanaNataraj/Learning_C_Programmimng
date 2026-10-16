#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int result[3][3];
    result[0][0]=arr[2][0];
    result[0][1]=arr[1][0];
    result[0][2]=arr[0][0];
    result[1][0]=arr[2][1];
    result[1][1]=arr[1][1];
    result[1][2]=arr[0][1];
    result[2][0]=arr[2][2];
    result[2][1]=arr[1][2];    
    result[2][2]=arr[0][2];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}