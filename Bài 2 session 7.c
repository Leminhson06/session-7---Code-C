#include <stdio.h>

int main(){
    int arr[5];

    printf("Nhập 5 số nguyên:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", arr[i]);
    }

    printf("\nCác phần tử trong mảng là:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}