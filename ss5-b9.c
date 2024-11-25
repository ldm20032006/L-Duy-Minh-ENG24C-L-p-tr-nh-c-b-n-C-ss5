#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1, num2, num3, sum, min, max, choice;
	float avg;
	do{
		printf("\n1. nhap ba so \n");
		printf("2. tinh tong 3 so \n");
		printf("3. tinh trung binh cong cua 3 so \n");
		printf("4. tim so lon nhat \n");
		printf("5. tim so nho nhat \n");
		printf("6. thoat \n");
		printf("vui long chon chuc nang: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("vui long nhap lan luot 3 so: ");
				scanf("%d %d %d", &num1, &num2, &num3);
				break;
			case 2:
				sum = num1 + num2 + num3;
				printf("%d + %d + %d = %d \n", num1, num2, num3, sum);
				break;
			case 3:
				sum = num1 + num2 + num3;
				avg = (float) sum / 3;
				printf(" trung binh cong cua %d, %d va %d la: %f \n", num1, num2, num3, avg);
				break;
			case 4:
				if(num1 > num2){
					max = num1;
				}
				else{
					max = num2;
				}
				if(max > num3)
					printf("so lon nhat trong 3 so %d, %d va %d la: %d \n", num1, num2, num3, max);
				else{
					max = num3;
					printf("so lon nhat trong 3 so %d, %d va %d la: %d \n", num1, num2, num3, max);	
				}
				break;
			case 5:
				if(num1 < num2){
					min = num1;
				}
				else{
					min = num2;
				}
				if(min < num3){
					printf("so nho nhat trong 3 so %d, %d va %d la: %d\n", num1, num2, num3, min);
				}
				else{
					min = num3;
					printf("so nho nhat trong 3 so %d, %d va %d la: %d\n", num1, num2, num3, min);
				}
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("ban da nhap sai vui long nhap lai\n");
		}
	}
	while(choice!=6);
	return 0;
}
