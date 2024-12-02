#include <stdio.h>

int main() {
    int n, m;
    printf("Moi ban nhap so hang: ");
    scanf("%d", &n);
    printf("Moi ban nhap so cot: ");
    scanf("%d", &m);
    int arr[n][m]; 
    printf("Nhap cac phan tu o mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Phan tu o vi tri (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
         for (int k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
          }
        }
    }
    printf("\nMang duoc sap xep :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

