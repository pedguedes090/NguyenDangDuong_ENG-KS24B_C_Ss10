#include <stdio.h>

int main() {
    int matrix[100][100], cheoPhu[100], rows, cols, k = 0;
	printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
	if (rows != cols) {
        printf("Ma tran khong phai la ma tran vuong. Vui long nhap lai.\n");
        return 1;
    }
	printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < rows; i++)
        cheoPhu[k++] = matrix[i][rows - 1 - i];
	for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (cheoPhu[i] < cheoPhu[j]) {
                int temp = cheoPhu[i];
                cheoPhu[i] = cheoPhu[j];
                cheoPhu[j] = temp;
            }
	for (int i = 0; i < rows; i++)
        matrix[i][rows - 1 - i] = cheoPhu[i];

    printf("Mang sau khi sap xep duong cheo phu giam dan:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
