#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	//nhap ten, loai, can ang, dia chi, khu vuc song cua dong vat
	//khai bao
	char ten[50];
	char loai[20];
	float cannang;
	char diachi[50];
	char khuvuc[50];
	//in
	printf("Nhap ten: ");
	gets(ten);
	printf("Nhap loai: ");
	gets(loai);
	printf("Nhap can nang: ");
	scanf("%f",&cannang);
	fflush(stdin);
	printf("Nhap dia chi: ");
	gets(diachi);
	printf("Nhap khu vuc song:");
	gets(khuvuc);
	//out
	printf("\nThong tin vua nhap: \n");
	printf("\tTen: %s\n",ten);
	printf("\tLoai: %s\n",loai);
	printf("\tCan nang: %.1f\n",cannang);
	printf("\tDia chi: %s\n",diachi);
	printf("\tKhu vuc: %s\n",khuvuc);
	return 0;
}

