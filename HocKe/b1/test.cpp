
//MANG-ARRAY
//1. Khai niem
//mang la 1 tap hon cac phan tu co cung kieu du lieu va cung muc dich su dung
//2. Cong dung
//mang dung de luu tru du lieu
//3. Khai bao
//<kieu du lieu> <ten cua mang>[so phan tu cua mang];
//vd tao ra 1 mang gom 5 phan tu la so nguyen
//int mangSoNguyen[5];
//4. Cach truy xuat
//de in ra 1 phan tu trong mang thi dung cau lenh
//printf("%d/%f",mang[i]);
//scanf("%d",&mang[i]);
//cac phep toan tu 
//==;>=;<=
// a = mang[0];
//if(a ==  mang[0]);
//5. Cac bai tap su dung mang
//nhap vao mang so nguyen, in ra mang do. tinh tong cac so chan cua mang.
//moi
#include <stdio.h>
void nhap(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("Phan tu thu %d la: ",i);
		scanf("%d",&arr[i]);
	}
}
void xuat(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("Phan tu thu %d la: %d\n",i,arr[i]);
	}
}
int tong(int arr[],int size){
	int steb=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			steb = steb + arr[i];
		}
	}
	return steb;
}
int main(){
	int size;
	printf("Moi ban nhap kich thuc cua mang: ");
	scanf("%d",&size);
	int arr[size];
	//nhap
	nhap(arr,size);
//	for(int i=0;i<size;i++){
//		printf("Phan tu thu %d la: ",i);
//		scanf("%d",&arr[i]);
//	}

	//xuat
	xuat(arr,size);
//	for(int i=0;i<size;i++){
//		printf("Phan tu thu %d la: %d\n",i,arr[i]);
//	}
//	int tong=0;
//	for(int i=0;i<size;i++){
//		if(arr[i]%2==0){
//			tong = tong + arr[i];
//		}
//	}
	printf("Tong cac so chan cua mang = %d",tong(arr,size));
	return 0;
}
