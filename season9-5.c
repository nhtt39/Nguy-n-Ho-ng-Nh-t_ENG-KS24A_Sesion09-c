#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100
int main() {
		int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
	}

	int hienThiMang(int arr[], int currentLength) {
    printf("Mang hien tai: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
	}

	int inPhanTuChan(int arr[], int currentLength) {
    int sum = 0;
    printf("Cac phan tu chan: ");
    for (int i = 0; i < currentLength; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu chan: %d\n", sum);
    return 0;
	}

	int inMaxMin(int arr[], int currentLength) {
    if (currentLength == 0) {
        printf("Mang rong\n");
        return 0;
    }

    int max = arr[0], min = arr[0];
    for (int i = 1; i < currentLength; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);
    return 0;
	}

	int inPhanTuNguyenTo(int arr[], int currentLength) {
    int sum = 0;
    printf("Cac phan tu nguyen to: ");
    for (int i = 0; i < currentLength; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu nguyen to: %d\n", sum);
    return 0;
	}

	int thongKeSoLuong(int arr[], int currentLength) {
    int num, count = 0;
    printf("Nhap so can thong ke: ");
    scanf("%d", &num);

    for (int i = 0; i < currentLength; i++) {
        if (arr[i] == num) count++;
    }

    printf("So %d xuat hien %d lan trong mang\n", num, count);
    return 0;
	}
	int themPhanTu(int arr[], int *currentLength, int maxSize) {
    if (*currentLength >= maxSize) {
        printf("Mang da day, khong the them phan tu\n");
        return 0;
    }

    int value, index;
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (0 den %d): ", *currentLength);
    scanf("%d", &index);

    if (index < 0 || index > *currentLength) {
        printf("Vi tri khong hop le\n");
        return 0;
    }

    for (int i = *currentLength; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    (*currentLength)++;
    return 0;
	}

    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &currentLength);
                if (currentLength > MAX_SIZE) {
                    printf("So phan tu vuot qua gioi han\n");
                    currentLength = MAX_SIZE;
                }

                printf("Nhap %d phan tu vao mang\n", currentLength);
                for (int i = 0; i < currentLength; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                hienThiMang(arr, currentLength);
                break;

            case 3:
                inPhanTuChan(arr, currentLength);
                break;

            case 4:
                inMaxMin(arr, currentLength);
                break;

            case 5:
                inPhanTuNguyenTo(arr, currentLength);
                break;

            case 6:
                thongKeSoLuong(arr, currentLength);
                break;

            case 7:
                themPhanTu(arr, &currentLength, MAX_SIZE);
                break;

            case 8:
                printf("Thoat chuong trinh\n");
                return 0;

            default:
                printf("Lua chon khong hop le\n");
        }
    }

    return 0;
}

