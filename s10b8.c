#include <stdio.h>

int main() {
    int n, m;
    printf("Moi nhap so hang: ");
    scanf("%d", &n);
    printf("Moi nhap so cot: ");
    scanf("%d", &m);
    int arr[n][m]; 
    printf("Nhap cac phan tu trong mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
            printf("Phan tu o vi tri (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
         for (int k = i + 1; k < n; k++) {
            if (arr[i][j] > arr[k][j]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
            }
         }
        }
    }
    printf("\n Mang duoc sap xep theo cot la :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

