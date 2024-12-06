#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Số phần tử phải lớn hơn 0.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Không thể cấp phát bộ nhớ.\n");
        return 1;
    }

    printf("Nhập các phần tử của mảng (chỉ chấp nhận số lẻ):\n");
    for (int i = 0; i < n; i++) {
        int temp;
        do {
            printf("Phần tử thứ %d: ", i + 1);
            scanf("%d", &temp);
            if (temp % 2 == 0) {
                printf("Giá trị phải là số lẻ. Vui lòng nhập lại.\n");
            }
        } while (temp % 2 == 0);
        arr[i] = temp;
    }

    printf("\nCác phần tử trong mảng là:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }


    return 0;
}
