#include <stdio.h>

int main() {
    int row, col;
    printf("Moi nhap so hang: ");
    scanf("%d", &row);
    printf("Moi nhap so cot: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Nhap so phan tu vao mang 2 chieu:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Phan tu o vi tri (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int n[row];
    for (int i = 0; i < row; i++) {
          n[i] = arr[i][i];
    }
    for (int i = 0; i < row - 1; i++) {
        for (int j = i + 1; j < row; j++) {
            if (n[i] > n[j]) {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        arr[i][i] = n[i];
    }
    printf("\nMa tran duoc sap xep \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

