#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	//menu
	
	//khai bao bien de nhap vao chuc nang
	int chon;
	//in ra menu
	printf("-------M.E.N.U--------\n");
	printf("1. Tinh tong 2 so\n");
	printf("2. Giai phuong trinh bac nhat\n");
	printf("------------------------");
	printf("\nMoi ban chon chuc nang: ");
	scanf("%d",&chon);
	switch (chon){
		case 1:{
			printf("\nChuc mung. Ban da chon thanh cong chuc nang so 1");
			
			float a,b;
			printf("\nNhap so thu nhat: ");
			scanf("%f", &a);
			printf("nNhap so thu hai: ");
			scanf("%f",&b);
			printf("\nTong hai so = %.1f", a+b);
			break;
		}
		case 2:{
			printf("chuc nang 2");
			break;
		}
		default:{
			printf("Ct khong co chuc nang nay.");
			break;
		}
	}
}

