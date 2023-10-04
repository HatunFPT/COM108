#include <stdio.h>

int main(){
//    float diemThi;
//    printf("Nhap vao diem thi: ");
//    scanf("%f",&diemThi);
//    if(diemThi >= 5) 
//		printf("\nChuc mung ban da qua mon");
//	else 
//		printf("\nRat tiec, ban da truot mon");
	float a,b;
	//
	printf("Nhap gia tri a: ");
	scanf("%f",&a);
	printf("Nhap gia tri b: ");
	scanf("%f",&b);
	//
	printf("Phuong trinh vua nhap la: \n %.2fx + %.2f = 0",a,b);
	//
	if(a == 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else
	{
		printf("\nPhuong trinh co nghiem= %.2f",(-b)/a);
	}
	//
    return 0;
}
