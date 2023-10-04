#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. Kiem tra so nguyen");
		printf("\n2. Tim UCLN, BCNN");
		printf("\n3. Tinh tien karaoke");
		printf("\n4. Tinh tien dien");
		printf("\n5. Doi tien");
		printf("\n6. Vay tra gop");
		printf("\n7. Vay mua xe");
		printf("\n8. Sap xep thong tin sinh vien");
		printf("\n9. Game FPOLY-LOTT");
		printf("\n10. Tinh toan phan so");
		printf("\n0. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				printf("\n1. Kiem tra so nguyen");
				//Khai bao
				float x;
				//Nhap xuat 
				do{
					printf("\nMoi nhap so nguyen: ");
					scanf("%f", &x);
					if(x != (int)x){
						printf("\nDay khong phai so nguyen. Moi nhap lai.");
					}
				} while(x != (int)x);
				//yc 1
				printf("\nBan da nhap thanh cong so nguyen x = %.0f",x); 
				//yc chesk so nguyen to
				int check =1;
				if(x<2){
					printf("\n%.0f khong la so nguyen to.",x);
				}
				else{
					for(int i=2;i<(int)x;i++){
						if((int)x%i==0){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("\n%.0f la so nguyen to.",x);
					} else{
						printf("\n%.0f khong la so nguyen to.",x);
					}
				}
				//yc check so chinh phuong
				int kiemtra=1;
				if(x<1){
					printf("\n%.0f khong la so chinh phuong.",x);
				}
				else{
					for(int i=2;i<x;i++){
						if(i*i == x){
							kiemtra = 0;
							break;
						}
					}
					if(kiemtra==0){
							printf("\n%.0f la so chinh phuong.",x);
						} else{
							printf("\n%.0f khong la so chinh phuong.",x);
						}	   
				}
				break;
			}
			case 2:{
				printf("\n2. Tim UCLN, BCNN");
				break;
			}
			case 3:{
				printf("\n3. Tinh tien karaoke");
				break;
			}
			case 4:{
				printf("\n4. Tinh tien dien");
				break;
			}
			case 5:{
				printf("\n5. Doi tien");
				break;
			}
			case 6:{
				printf("\n6. Vay tra gop");
				break;
			}
			case 7:{
				printf("\n7. Vay mua xe");
				break;
			}
			case 8:{
				printf("\n8. Sap xep thong tin sinh vien");
				break;
			}
			case 9:{
				printf("\n9. Game FPOLY-LOTT");
				break;
			}
			case 10:{
				printf("\n10. Tinh toan phan so");
				break;
			}
			case 0:{
				exit(0);
				break;
			}
			default :{
				printf("\nChuong trinh khong co chuc nang nay. Moi nhap lai");
				break;
			}
		}	
	} while(1);
	return 0;
}

