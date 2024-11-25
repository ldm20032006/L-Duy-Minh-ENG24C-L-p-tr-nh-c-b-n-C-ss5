#include<stdio.h>
int main(){
	int soNhan, soBiNhan, tich;
	printf("hay nhap so nguyen duong tu 1 den 10: ");
	scanf("%d", &soNhan);
	while(soNhan <1 || soNhan > 10){
		printf("ban da nhap sai hay nhap lai: ");
		scanf("%d", &soNhan);
	}
	printf("bang cu cuong nhan %d \n", soNhan);
	for(soBiNhan = 0; soBiNhan <= 10; soBiNhan++){
		tich = soNhan * soBiNhan;
		printf("%d x %d = %d \n", soNhan, soBiNhan, tich);
	}
	return 0;
}
