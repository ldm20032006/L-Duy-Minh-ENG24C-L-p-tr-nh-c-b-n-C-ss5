#include<stdio.h>
int main(){
	int number, numberLoop, sum = 0;
	printf("hay nhap so nguyen duong: ");
	scanf("%d", &numberLoop);
	for(number; number <= numberLoop; number++){
		sum+=number;
	}
	printf("tong la: %d", sum);
	return 0;
}
	
