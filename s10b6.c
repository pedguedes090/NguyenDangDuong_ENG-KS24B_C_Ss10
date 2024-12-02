#include <stdio.h>

int main() {
    int arr[] = {2, 1, 3, 6, 5, 7, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int up, positions[n];  
    int Index = 0;  

    printf("Nhap mot so nguyen de tim kiem: ");
    scanf("%d", &up);
     for (int i = 0; i < n; i++) {
        if (arr[i] == up) {
            positions[Index] = i + 1;  
            Index++;
        }
    }
    if (Index > 0) {
        printf("%d duoc tim thay o vi  tri: ", up);
        for (int i = 0; i < Index; i++) {
            printf("%d ", positions[i]); 
        }
        printf("\n");
    } else {
        printf("%d khog tim thay trong mang \n", up);
    }
}

