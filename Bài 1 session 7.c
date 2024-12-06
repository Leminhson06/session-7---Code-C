#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int length = size(arr) / size(arr[0]);

    printf("Các phần tử trong mảng:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("Độ dài của mảng: %d\n", length);

    return 0;
}