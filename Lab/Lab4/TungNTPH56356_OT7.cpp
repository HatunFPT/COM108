#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ham kiem tra so nguyen to
int checkSoNguyenTo(int number){
	int check =1;
	if(number < 2){
		check=0;
	} 
	else {
		for(int i=2;i<number;i++){
			if(number % i == 0){
				check=0;
				break;
			}
		}
	}
	return check;
}
//ham nhap xuat thong tin dien thoai
void thongtinDT(){
	char ten[30];
	int giatien;
	int nam;
	//nhap
	printf("Nhap ten hang dien thoai: ");
	gets(ten);
	printf("Nhap gia tien: ");
	scanf("%d",&giatien);
	printf("Nhap nam mua: ");
	scanf("%d",&nam);
	//xuat
	printf("\tThong tin dien thoai vua nhap:\n");
	printf("Ten hang: %s\n",ten);
	printf("Gia tien: %d\n",giatien);
	printf("Nam mua: %d\n",nam);
}
//dem gia tri
int demGiay(int mangGia[], int size){
	int dem=0;
	for(int i=0;i<size;i++){
		if(mangGia[i]>=200000 && mangGia[i]<=1000000){
			dem++;
		}
	}
	return dem;
}
//tb
float tbmang(int mangGia[],int size){
	int tong=0;
	float TB;
	for(int i=0;i<size;i++){
		tong+=mangGia[i];
	}
	TB=(float)tong/size;
	return TB;
}
//max

int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. Kiem tra so nguyen to.");
		printf("\n2. Thong tin dien thoai");
		printf("\n3. Gia tien cac doi giay.");
		printf("\n0. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap chuc nang can dung: ");
		scanf("%d", &chonCN);
		fflush(stdin);
		//run
		switch(chonCN) {
			case 1:{
				printf("Chuc nang kiem tra so nguyen.\n");
				int number;
				do{
					printf("Nhap vao mot so nguyen: ");
					scanf("%d",&number);
					if(number<1){
						printf("Nhap so lon hon hoac bang 1. Nhap lai!\n");
					}
				} while (number<1);
				
				int check=checkSoNguyenTo(number);
				if(check==0){
					printf("\t%d khong la so nguyen to.\n",number);
				}
				else {
					printf("\t%d la so nguyen to.\n",number);
				}
				break;
			}
			case 2:{
				printf("Chuc nang thong tin dien thoai.\n");
				thongtinDT();
				break;
			}
			
			case 3:{
				printf("Chuc nang thong tin gia giay.\n");
				int size;
				do{
					printf("Nhap so luong giay dep: ");
					scanf("%d",&size);
					if(size<=0){
						printf("Nhap so luong lon hon 0. Nhap lai!\n");
					}
				} while (size<=0);
				int mangGia[size];
				//nhap
				for(int i=0;i<size;i++){
					do{
						printf("Nhap gia tien doi thu %i: ",i+1);
						scanf("%d",&mangGia[i]);
						if(mangGia[i] < 0){
							printf("Gia tien phai lon hon 0. Nhap lai!\n");
						}
					} while(mangGia[i] < 0);
				}
				//dem
				int dem=demGiay(mangGia,size);
				printf("---------");
				printf("\nCo %d loai giay, dep co gia tien tu 200k - 1tr\n",dem);
				//tb
				float TB=tbmang(mangGia,size);
				printf("Tung binh gia tien cac loai giay dep la %.2f",TB);
				//
				int max=mangGia[0];
				int min=mangGia[0];
				
				for(int i=0;i<size;i++){
					if(min>mangGia[i]){
						min=mangGia[i];
					}
					if(max<mangGia[i]){
						max=mangGia[i];
					}
				}
				printf("\nVi tri doi dat nhat: ");
				for(int i=0;i<size;i++){
					if(mangGia[i]==max){
						printf("%d ",i+1);
					}
				}
				printf("\nVi tri doi re nhat: ");
				for(int i=0;i<size;i++){
					if(mangGia[i]==min){
						printf("%d ",i+1);
					}
				}
				int steb;
				for(int i=0;i<size;i++){
					for(int j=0;j<size;j++){
						if(mangGia[i]<mangGia[j]){
							steb=mangGia[i];
							mangGia[i]=mangGia[j];
							mangGia[j]=steb;
						}
					}
				}
				printf("\nMang gia tien tang dan: ");
				for(int i=0;i<size;i++){
					printf("%d\t",mangGia[i]);
				}
				break;
			}
			case 0:{
				printf("Thoat!");
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

