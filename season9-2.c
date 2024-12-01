#include <stdio.h>

int main() {
//Bai tap2
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
    int index, newValue;
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vi tri can sua (0 den %d): ", n-1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[index] = newValue;
    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
