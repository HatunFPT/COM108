//mang 1 chieu

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int n;
	do{
		printf("Moi nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<0){
			printf("Loi roi! Moi nhap so lon hon 0. Moi nhap lai.\n");
		}
	}while (n<0); 
	int mangSo[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&mangSo[i]);
	}
	fflush(stdin);
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=mangSo[i];
	}
	printf("Tong cac phan tu cua mang = %d",tong);
	//sap xep
	
	return 0;
}

