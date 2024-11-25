#include<stdio.h>
int main(){
	int soNhan, soBiNhan, tich;
	for(soNhan = 1; soNhan <= 9; soNhan++){
		printf("bang cuu chuong nhan %d \n", soNhan);
		for(soBiNhan =1; soBiNhan <= 10; soBiNhan++){
			tich = soNhan * soBiNhan;
			printf("%d x %d = %d \n", soNhan, soBiNhan, tich);
		}
	}
	return 0;
}
