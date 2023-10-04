//menu hoan thien
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int chon;
	//menu
	do{
		printf("-----Menu-----\n");
		printf("1. Tinh trung binh\n");
		printf("2. so nguyen to\n");
		printf("3. So chinh phuong\n");
		printf("4. Thoat\n");
		
		printf("\nMoi ban chon chuc nang: ");
		scanf("%d", &chon);
		//chay
		switch(chon){
			case 1:{
				printf("1. Tinh trung binh\n");
				break;
			}
			case 2:{
				printf("2. so nguyen to\n");
				break;
			}
			case 3:{
				printf("3. So chinh phuong\n");
				break;
			}
			case 4:{
				printf("4. Thoat\n");
				exit(0);
				break;
			}
			default :{
				printf("Moi nhap lai chuc nang.");
				break;
			}
		}
	}while(1);
	return 0;
}

