#include<stdio.h>
int main(){
	int a, b;
	printf("vui long nhap hai so nguyen: ");
	scanf("%d %d", &a, &b);
	while(a!=b){
		if(a>b){
			a = a - b;
		}
		else{
			b = b - a;
		}	
	}
	printf("uoc chung lon nhat cua hai so tren la: %d", a);
	return 0;	
}
