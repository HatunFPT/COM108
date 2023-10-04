#include <stdio.h>
#include <math.h>

int main(){
	printf("De 2");
	//khai bao
	int chonCN;
	//In menu
	printf("\n----------M.E.N.U----------");
	printf("\n1. Tim kiem nguoi yeu.");
	printf("\n2. Kiem tra so.");
	printf("\n---------------------------");
	//Chon chuc nang
	printf("\nMoi ban chon chuc nang: ");
	scanf("%d", &chonCN);
	//
	switch (chonCN){
		case 1:{
			printf("\nChuc mung ban da chon thanh cong chuc nang so 1. ");
			printf("\n\tTim kiem nguoi yeu.");
			//khai bao
			float diemRL,DRLngay;
			//
			printf("\nMoi ban nhap diem ren luyen ca nam:");
			scanf("%f", &diemRL);
			//
			DRLngay = diemRL * 2 / 12;
			printf("\nDiem ren luyen theo ngay cua ban la: %.2f",DRLngay);
			if(DRLngay >= 0 && DRLngay < 15){
				printf("\nKhong co ai yeu.");
			}
			else if(DRLngay <= 20){
				printf("\nKho kiem nguoi yeu lam.");
			}
			else if(DRLngay <= 35){
				printf("\nNhu nay may man thi kiem duoc 1 nguoi.");
			}
			else if(DRLngay < 65){
				printf("\nNhieu nguoi yeu nhe.");
			}
			else if(DRLngay <= 78){
				printf("\nNhieu nguoi yeu nhung yeu it thoi nhe.");
			}
			else {
				printf("\nNhu nay cung co kiem nguoi yeu lam."); 
			}
			break;
		}
		case 2:{
			//
			printf("\nChuc mung ban da chon thanh cong chuc nang so 2. ");
			printf("\n\tKiem tra so.");
			//khai bao
			float sothuc1,sothuc2,tich;
			//nhap xuat
			printf("\nNhap so thu nhat: ");
			scanf("%f",&sothuc1);
			printf("Nhap so thu hai: ");
			scanf("%f",&sothuc2);
			printf("\n2 so ban vua nhap la: %.2f va %.2f ",sothuc1,sothuc2);
			
			if(sothuc1 > sothuc2){
				printf("\nSo lon hon la: %.2f.",sothuc1);
				if(sothuc1 > 0){
					printf("\n%.2f la so duong.", sothuc1);
					tich = sothuc1*sothuc2;
					printf("\nTich 2 so vua nhap = %.2f", tich);
				}
				else {
					printf("\n%.2f khong la so duong.", sothuc1);
				}
			}
			else{
				printf("\nSo lon hon la: %.2f.",sothuc2);
				if(sothuc2 > 0){
					printf("\n%.2f la so duong.", sothuc2);
					tich = sothuc1*sothuc2;
					printf("\nTich 2 so vua nhap = %.2f", tich);
				}
				else {
					printf("\n%.2f khong la so duong.", sothuc2);
				}
			}
			break;
		}
		default :{
			printf("\nKhong co chuc nang nay.");
			break;
		}
	}
	return 0;
}

