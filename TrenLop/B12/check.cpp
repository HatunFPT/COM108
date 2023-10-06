#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1.");
		printf("\n2.");
		printf("\n3.");
		printf("\n4.");
		printf("\n5.");
		printf("\n6.");
		printf("\n0. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				printf("1. ");
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

