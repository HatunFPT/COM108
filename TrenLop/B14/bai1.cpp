#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkSoNguyenTo(int number){
	int check=1;
	for(int i=2;i<number;i++){
		if(number%i==0){
			check=0;
			break;
		}
	}
	return check;
}

void nhapARR(int arr[],int n){
	printf("Moi nhap gia tra sua: \n");
	for(int i=0;i<n;i++){
		do{
			printf("Nhap gia tra sua loai %d = ",i+1);
			scanf("%d",&arr[i]);
			if(arr[i]<=0){
				printf("Gia phai lon hon 0. Moi nhap lai!\n");
			}
		} while (arr[i]<=0);
		
	}
}
int demTS(int arr[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]>20){
			dem++;
		}
	}
	return dem;
}
int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. So nguyen");
		printf("\n2. Tra sua");
		printf("\n3. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				printf("Thuc hien chuc nang so 1:\n");
				int number,tong=2;
				printf("Moi nhap so nguyen: "); 
				scanf("%d", &number);
				if(number < 2){
					printf("\tTong cac so nguyen to tu 1 toi %d = 0",number);
				} else if(number ==2){
					printf("\tTong cac so nguyen to tu 1 toi %d = 2",number);
				} else{
					for(int i=3;i<=number;i++){
						if(checkSoNguyenTo(i)==1)
							tong+=i;
					}
					printf("\tTong cac so nguyen to tu 1 toi %d = %d",number,tong);
				}
				break;
			}
			case 2:{
				printf("Thuc hien chuc nang so 2:\n");
				int size;
				printf("Moi nhap vao so loai tra sua cua quan: ");
				scanf("%d",&size);
				int arr[size];
				nhapARR(arr,size);
				printf("\tQuan co %d loai tra sua co gia > 20.\n",demTS(arr,size));
				break;
			}
			case 3:{
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

