#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    printf("Nhap so phan tu ban dau: ");
    scanf("%d", &currentLength);
    if (currentLength > MAX_SIZE) {
        printf("So phan tu vuot qua gioi han\n");
        return 1;
    }
    printf("Nhap %d phan tu vao mang\n", currentLength);
    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int deleteIndex;
    printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

