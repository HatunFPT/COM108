#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int monHoc;
	char nganhHoc[50];
	printf("Moi nhap so mon hoc: ");
	scanf("%d",&monHoc);
	fflush(stdin);
	printf("Moi nhap nganh hoc: ");
	gets(nganhHoc);
	printf("\nNganh %s co %d mon hoc.",nganhHoc,monHoc);
	return 0;
}

