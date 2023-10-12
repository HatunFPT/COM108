#include <stdio.h>
void nhapMang(int mang[],int n){
	printf("Nhap thon tin cho mang:\n");
	for(int i=0;i<n;i++){
		printf("\tPhan tu mang[%d]= ",i);
		scanf("%d",&mang[i]);
	}
}
void xuatMang(int mang[],int n){
	printf("\nXuat thong tin mang:\n");
	for(int i=0;i<n;i++){
		printf("\tPhan tu mang[%d]= %d\n",i,mang[i]);
		
	}
}
int tongMang(int mang[],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=mang[i];
	}
	return tong;
}
int main (){
	//nhap vao n la size cua mang
	//nhap 1 mang so nguyen gom n phan tu voi n nhao tu bn phim, in thong tin cua
	
	int size;
	int arr[100];
	
	printf("Moi nhap so phan tu cua mang: ");
	scanf("%d",&size);
	
	nhapMang(arr,size);
	xuatMang(arr,size);
	printf("\nTong cac phan tu cua mang la: %d",tongMang(arr,size));
	return 0;
}

