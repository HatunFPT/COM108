#include <stdio.h>

int main (){
	//bai 1
	//nhap diem toan ly hoa, so nguyen tinh diem tb ra man hinh
//	int diemToan;
//	int diemLy;
//	int diemHoa;
//	printf("Nhap diem mon Toan: ");
//	scanf("%d",&diemToan);
//	printf("Nhap diem mon Hoa: ");
//	scanf("%d",&diemHoa);
//	printf("Nhap diem mon Ly: ");
//	scanf("%d",&diemLy);
//	float diemTB;
//	diemTB=((float)diemToan+(float)diemLy+(float)diemHoa)/3;
//	printf("Diem trung binh 3 mon = %.2f\n",diemTB);
	//bai 2
	//nhap ten cua ban than va in ra man hinh
	char name[100];
	printf("Moi nhap ten: ");
	//scanf("%s",name);
	//rieng voi %s khong co &
//	printf("Ten la %s",name);
	//scanf("%[^\n]", name);
	//cach 2
	gets(name);
	printf("Ten la %s",name);
	return 0;
}

