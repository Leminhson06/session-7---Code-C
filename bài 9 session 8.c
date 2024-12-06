#include <stdio.h>

int main(){
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    for(int i=0;i<5;i++){
        printf("%d",arr[0][i]);
    }
    printf("Giá trị biên bên phải \n");
    for(int i=0;i<4;i++){
        printf("%d",arr[i][4]);
    }
    for(int i=0;i<4;i++){
        printf("%d",arr[i][0]);
    }
    for(int

 