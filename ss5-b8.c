#include<stdio.h>
int main(){
	int a, b, a1, b1;
	printf("vui long nhap hai so nguyen: ");
	scanf("%d %d", &a, &b);
	a1 = a, b1 = b;
	while(a!=b){
		if(a>b){
			a = a - b;
		}
		else{
			b = b - a;
		}	
	}
	printf("boi chung nho nhat cua hai so tren la: %d", (a1 * b1) / a);
	return 0;	
}
