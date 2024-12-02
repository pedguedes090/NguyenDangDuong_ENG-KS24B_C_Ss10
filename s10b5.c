#include <stdio.h>

int main() {
    int arr[] = {2, 1, 3, 5, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int temp, key, left, right, mid;
    int position=-1;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Mang duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("Tim kiem : ");
    scanf("%d", &key);
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == key) {
            position = mid;  
            break;
        }
        if (arr[mid] > key) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", key, position + 1);
    } else {
        printf("Ohan tu khong ton tai trong mang \n", key);
    }
}

