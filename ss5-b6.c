#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, tong, hieu, tich, choice;
    float thuong;
    do {
    	printf("Vui long nhap lan luot so thu nhat va so thu hai: ");
    	scanf("%d %d", &num1, &num2);
        printf("\nMoi ban chon chuc nang:\n");
        printf("1. Tinh tong\n");
        printf("2. Tinh hieu\n");
        printf("3. Tinh tich\n");
        printf("4. Tinh thuong\n");
        printf("5. Thoat\n");
        printf("Chon chuc nang muon su dung: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                tong = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, tong);
                break;
            case 2:
                hieu = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, hieu);
                break;
            case 3:
                tich = num1 * num2;
                printf("%d x %d = %d\n", num1, num2, tich);
                break;
            case 4:
                if (num2 != 0) {
                    thuong = (float)num1 / num2;
                    printf("%d : %d = %.2f\n", num1, num2, thuong);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 5);
    return 0;
}

