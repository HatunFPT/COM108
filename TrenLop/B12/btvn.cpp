#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ham tinh tonng day so le
int tongDaySo(int n){
	int tong;
	for(int i=1;i<=n;i+=2){
		tong+=i;
	}
	return tong;
}
//ham kiem tra diem
void checkDiem(float diem){
	if(diem<3){
		printf("\nCan nghiem tuc xem xet lai.");
	} 
	else if(diem<5){
		printf("\nLuoi hoc qua.");
	}
	else if(diem<7){
		printf("\nCham chi hon.");
	}
	else if(diem<9){
		printf("\nKien thuc on.");
	}
	else{
		printf("\nTiep tuc phat huy");
	}	
}
//kiem tra so chan
int checkSoChan(int n){
	if(n%2==0){
		return 1;
	} else{
		return 0;
	}
}
int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. Tinh tong day so le");
		printf("\n2. Kiem tra diem");
		printf("\n3. In cac so chan");
		printf("\n-1. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				//khai bao
				printf("\nThuc hien chuc nang so 1. ");
				int n;
				//nhapxuat
				do{
					printf("\nMoi nhap so nguyen: ");
					scanf("%d",&n);
					if(n<=5 || n>=15){
						printf("\nMoi nhap so trong khoang tu 5 toi 15.");
					}
				} while(n <= 5 || n >= 15);
				//run
				printf("\tTong cac so le lien tiep tu 1 toi %d = %d",n,tongDaySo(n));
				break;
			}
			case 2:{
				//khaibao
				printf("\nThuc hien chuc nang so 2. ");
				float diem;
				//nhap xuat
				do{
					printf("\nMoi nhap diem: ");
					scanf("%f",&diem);
					if(diem<0 || diem >10){
						printf("\nMoi nhap diem trong khoang tu 0 toi 10.");
					}
				} while(diem<0 || diem >10);
				//run
				checkDiem(diem);
				break;
			}
			case 3:{
				//khai bao
				printf("\nThuc hien chuc nang so 3. ");
				int n;
				//nhap xuat
				do{
					printf("\nMoi nhap so nguyen: ");
					scanf("%d",&n);
					if(n<=3){
						printf("\nMoi nhap so nguyen > 3.");
					}
				} while(n<=3);
				//run
				printf("\nDay so chan tu 3 toi %d la:",n);
				for(int i=3;i<=n;i++){
					if(checkSoChan(i)==1){
						printf("%d",i);
					} else{
						printf(" ");
					}
				}
				break;
			}
			case -1:{
				printf("\nThoat!");
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

