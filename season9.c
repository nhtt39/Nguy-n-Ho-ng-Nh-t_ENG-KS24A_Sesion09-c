#include <stdio.h>
#define MAX_SIZE 100

int main() {
	//Bai tap1
    int arr[MAX_SIZE];
    int currentLength = 0;
    printf("Nhap so phan tu ban dau ");
    scanf("%d", &currentLength);
    if (currentLength > MAX_SIZE) {
        printf("So phan tu vuot qua gioi han\n");
        return 1;
    }
    printf("Nhap %d phan tu vao mang\n", currentLength);
    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    int addValue, addIndex;
    printf("Nhap gia tri can them vao mang ");
    scanf("%d", &addValue);
    printf("Nhap vi tri muon chen (0 den %d) ", currentLength);
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex > currentLength) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    if (addIndex == currentLength) {
        arr[currentLength] = addValue;
        currentLength++;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }
    printf("Mang sau khi them phan tu ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

