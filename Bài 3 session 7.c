#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int checkChan = 0;

    printf("Các phần tử trong mảng là:\n");
    for (int i =0;i < 5; i++) {
        if (arr[i] % 2 ==0) {
            printf("%d", arr[i]);
            checkChan = 1;
        }
    }

    if (!checkChan) {
        printf("Mảng không chứa số chẵn.\n");
    } else {
        printf("\n");
    }

    return 0;
}


