#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
				printf("\n1. Day so");
				//khaibao
				int tong=0;
				float n;
				//nhapxuat
				do{
					printf("\nNhap n: ");
					scanf("%f",&n);
					if(n<=33) printf("\nNhap so > 33. Nhap lai.");
				} while(n<=33);
				printf("\nDay so chia het cho 5 la:");
				//run
				for(int i=6;i<=(int)n;i++){
					if(i%5==0){
						printf(" %d",i);
						tong=tong+i*i;
					}
				}
				printf("\nTong binh phuong = %d",tong);
				break;
			}
			case 2:{
				printf("\n2. So chinh phuong");
				float x;
				do{
					printf("\nNhap so duong: ");
					scanf("%f",&x);
				}while (x<=0);
				if(x>8){
					if (sqrt(x) == (int)sqrt(x))
                		printf("\n%.0f la chinh phuong.",x);
           			else
               			printf("\n%.1f khong la chinh phuong.",x);
				} else {
					printf("\n%.1f nho hon 8.",x);
				}
				break;
			}
			case 3:{
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

