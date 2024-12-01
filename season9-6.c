#include <stdio.h>

#define MAX_SIZE 100
	int main() {
	int hienThiMaTran(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Ma tran hien tai:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
	}
	int inPhanTuLe(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int sum = 0;
    printf("Cac phan tu le: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 != 0) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }
    printf("\nTong cac phan tu le: %d\n", sum);
    return 0;
	}
	int inDuongBien(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int product = 1;
    printf("Cac phan tu tren duong bien: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", arr[i][j]);
                product *= arr[i][j];
            }
        }
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", product);
    return 0;
	}

	int inDuongCheoChinh(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    return 0;
	}
	int inDuongCheoPhu(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Cac phan tu tren duong cheo phu: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][cols - 1 - i]);
    }
    printf("\n");
    return 0;
	}
	int inDauDaiTongMax(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int maxSum = -9999999, rowMax = -1;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            rowMax = i;
        }
    }
    printf("Dau dai tong lon nhat la: ");
    for (int j = 0; j < cols; j++) {
        printf("%d ", arr[rowMax][j]);
    }
    printf("\nTong cua dong nay la: %d\n", maxSum);
    return 0;
	}

    int arr[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua ma tran\n");
        printf("2. In gia tri cac phan tu cua ma tran theo ma tran\n");
        printf("3. In ra gia tri cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu tren duong cheo chinh\n");
        printf("6. In ra cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so dong (max %d): ", MAX_SIZE);
                scanf("%d", &rows);
                printf("Nhap so cot (max %d): ", MAX_SIZE);
                scanf("%d", &cols);
                if (rows > MAX_SIZE || cols > MAX_SIZE) {
                    printf("Kich co vuot qua gioi han cho phep.\n");
                    continue;
                }
                printf("Nhap gia tri cho ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("Nhap gia tri phan tu [%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                hienThiMaTran(arr, rows, cols);
                break;

            case 3:
                inPhanTuLe(arr, rows, cols);
                break;

            case 4:
                inDuongBien(arr, rows, cols);
                break;

            case 5:
                inDuongCheoChinh(arr, rows, cols);
                break;

            case 6:
                inDuongCheoPhu(arr, rows, cols);
                break;

            case 7:
                inDauDaiTongMax(arr, rows, cols);
                break;

            case 8:
                printf("Thoat chuong trinh\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}

