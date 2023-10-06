#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//chuc nang day so
int tinhTongBinhPhuong(int n){
	//Khai bao
	int tong=0;
	//tinh tong va in
	printf("\nDay so chia het co 5 tu 6 toi %d la: ",n);
	for(int i=6;i<=n;i++){
		if(i%5 == 0){
			printf("%d ",i);
			tong = tong + pow(i,2);
		}
	}
	return tong;
}
//chuc nang so chinh phuong
int checkSoNguyenTo(int n) {
	if (sqrt(n) == (int)sqrt(n)){
		return 1;
	} else {
		return 0;
	}    
}
int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. Day so");
		printf("\n2. So chinh phuong");
		printf("\n3. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				printf("Thuc hien chuc nang 1\n");
				//khai bao
				int n,tong =0;
				//check
				do{
					printf("Moi nhap so nguyen: ");
					scanf("%d",&n);
					if(n<=33){
						printf("Moi nhap lai so lon hon 33\n");
					}
				}while (n<=33);
				tong=tinhTongBinhPhuong(n);
				printf("\nTong binh phuong cac so cua day = %d",tong);
				break;
			}
			case 2:{
				printf("Thuc hien chuc nang 2\n");
				//khaibao
				int n;
				int check=0;
				//check
				do{
					printf("Moi nhap so nguyen: ");
					scanf("%d",&n);
					if(n<=0){
						printf("Moi nhap lai so duong\n");
					}
				} while(n<=0);
				//in ket qua
				if(n>8){
					printf("\n%d la so > 8\n",n);
					check=checkSoNguyenTo(n);
					if(check==1){
						printf("%d la so nguyen to.\n",n);
					} else {
						printf("%d khong la so nguyen to.\n",n);
					}
				} else{
					printf("\n%d la so <= 8\n",n);
				}
				break;
			}
			case 3:{
				printf("Thoat!\n");
				exit(0);
				break;
			}
			default :{
				printf("\nChuong trinh khong co chuc nang nay. Moi nhap lai\n");
				break;
			}
		}
	} while(1);
	return 0;
}

