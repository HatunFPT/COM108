#include <stdio.h>
float diemTB(float a, float b, float c){
	float diem=(a*3+b*2+c)/6;
	return diem;
}
int main(){
	float diemtb,diemToan,diemLy,diemHoa;
	printf("\nNhap diem Toan: ");
	scanf("%f",&diemToan);
	printf("\nNhap diem Ly: ");
	scanf("%f",&diemLy);
	printf("\nNhap diem Hoa: ");
	scanf("%f",&diemHoa);
	diemtb=diemTB(diemToan,diemLy,diemHoa);
	printf("Diem trung binh = %.2f",diemtb);
	return 0;
}
