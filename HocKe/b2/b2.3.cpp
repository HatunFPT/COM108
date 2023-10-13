#include <stdio.h>
#include <stdlib.h>

int main (){
	//tao menu chuc nang chon lai cho toi khi chon 0
	//1 nhap ten tuoi dia chi in ra
	//2. nhap 1 mang so nguyen gom n phan tu tinh tong cac so nguyen o vi tri le trong mang
	//0 thoat
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. Thong tin ban than");
		printf("\n2. Day so");
		printf("\n0. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		fflush(stdin);
		//run
		switch(chonCN) {
			case 1:{
				printf("1. ");
				
				char name[50];
				printf("Nhap ten ban than: ");
				gets(name);
				
				int old;
				printf("Nhap tuoi cua ban than: ");
				scanf("%d",&old);
				fflush(stdin);
				
				char address[50];
				printf("Nhap dia chi ban than: ");
				gets(address);
				
				printf("\nThong tin vua nhap:\n");
				printf("\tTen: %s",name);
				printf("\tTuoi: %d",old);
				printf("\tDia chi: %s",address);
				break;
			}
			case 2:{
				printf("2.")
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
	} while(chonCN != 0);
	return 0;
}

