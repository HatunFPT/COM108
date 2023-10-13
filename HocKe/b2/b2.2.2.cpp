#include <stdio.h>

int main (){
	//nhao chieu cao, can nang, ky hoc cua ban than va in ra man hinh
	int chieucao;
	float cannang;
	int kyhoc;
	printf("Nhap chieu cao: ");
	scanf("%d",&chieucao);
	printf("Nhap can nang: ");
	scanf("%f",&cannang);
	printf("Nhap ky hoc: ");
	scanf("%d",&kyhoc);
	printf("\nThong tin vua nhap: \n");
	printf("\tChieu cao: %d\n",chieucao);
	printf("\tCan nang: %.2f\n",cannang);
	printf("\tKy hoc: %d\n",kyhoc);
	return 0;
}

