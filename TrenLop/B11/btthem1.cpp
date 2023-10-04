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
		printf("\n2. So nguyen");
		printf("\n3. Giai phuong trinh bac 2");
		printf("\n0. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				printf("\n1. Day so");
				//khai bao
				float x;
				int tong=0;
				//nhapxuat
				do{
					printf("\nMoi nhap: ");
					scanf("%f",&x);
					if(x<0)printf("\nMoi ban nhap so duong.");
				}while(x<0);
				//run
				for(int i=1;i<=(int)x;i++){
					if(i%3==0)
						tong += i;
				}
				printf("\nTong = %d",tong);
				break;
			}
			case 2:{
				//khaibao
				printf("\n2. So nguyen");
				//khaibao
				int x;
				int check=1;
				//nhapxuat
				do{
					printf("\nmoi ban nhap so nguyen lonn hon 5: ");
					scanf("%d",&x);
					if(x<=5)
						printf("\nLoi roi! Nhap lai: ");
				} while(x<=5);
				//run
				for(int i=2;i<x;i++){
					if(x%i==0){
						check=0;
						break;
					}
				}
				if(check==1){
					printf("\n%d la so nguyen to.",x);
				}
				else{
					printf("\n%d khong la so nguyen to.",x);
				} 
				break;
			}
			case 3:{
				printf("\n3. Giai phuong trinh bac 2");
				//khaibao
				float a,b,c,delta,x1,x2;
				//nhapxuat
				do{
					printf("\nNhap a: ");
					scanf("%f",&a);
					if(a==0){
						printf("\nMoi nhap a khac 0. Nhap lai.");
					}
				} while(a==0);
				printf("Nhap b: ");
				scanf("%f",&b);
				printf("Nhap c: ");
				scanf("%f",&c);
				printf("\nPhuong trinh bac 2 ban vua nhap la:");
				printf("\n\t%.1fx^2 + %.1fx + %.1f = 0",a,b,c);
				printf("\nGiai:");
				//run
				delta=b*b-4*a*c;
				if(delta<0){
					printf("\nPhuong trinh vo nghiem");
				}
				else if(delta == 0){
					x1=x2=-b/(2*a);
					printf("\nPhuong trinh co nghiem kep x1=x2= %.1f",x1);
				}
				else{
					x1=(-b+sqrt(delta))/(2*a);
					x2=(-b-sqrt(delta))/(2*a);
					printf("\nPhuong trinh co 2 nghiem:");
					printf("\n\tx1= %.1f",x1);
					printf("\n\tx2= %.1f",x2);
				}
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

