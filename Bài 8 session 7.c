#include <stdio.h>
#include <stdlib.h> // Để sử dụng malloc và free

int main() {
    int rows, cols;

    // Nhập số hàng và số cột của mảng 2 chiều
    printf("Nhập số hàng: ");
    scanf("%d", &rows);
    printf("Nhập số cột: ");
    scanf("%d", &cols);

    // Kiểm tra nếu số hàng hoặc cột <= 0
    if (rows <= 0 || cols <= 0) {
        printf("Số hàng và số cột phải lớn hơn 0.\n");
        return 1;
    }

    // Cấp phát bộ nhớ động cho mảng 2 chiều
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Nhập từng phần tử của mảng 2 chiều
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phần tử arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // In mảng ra màn hình theo dạng ma trận
    printf("\nMa trận đã nhập:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // Xuống dòng sau mỗi hàng
    }

    // Giải phóng bộ nhớ đã cấp phát
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}