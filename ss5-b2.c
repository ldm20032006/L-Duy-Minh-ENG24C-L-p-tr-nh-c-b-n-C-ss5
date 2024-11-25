#include<stdio.h>
int main(){
	int a, b = 6;
	while(a != 6){
		printf("hay nhap mot so nguyen bat ki: ");
		scanf("%d", &a);
		if(a != b){
			printf("khong trung voi so ban dau \n");
		}
		else{
			printf("trung voi so ban dau");
		}
	}
	return 0;
}
