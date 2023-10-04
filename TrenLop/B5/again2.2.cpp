//Go lai bai 2.2
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
//Khai bao
	float a,b,c,delta,x,x1,x2;
//Nhap xuat
	printf("Giai phuong trinh bac 2.");
	printf("\nNhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	printf("\nPhuong trinh vua nhap la: %.1fx^2 + %.1fx + %.1f = 0",a,b,c);
//Giai
	if(a == 0){
		//Giai phuong trinh bac nhat
		if(b == 0){
			if(c == 0){
				printf("\n\nPhuong trinh co vo so nghiem.");
			}
			else{
				printf("\n\nPhuong trinh vo nghiem.");
			}
		}
		else{
			x= -c/b;
			printf("\n\nPhuong trinh co nghiem x = %.1f .",x);	
		}
	}
	else{
		delta = b*b - 4*a*c;
		if(delta < 0){
			printf("\nPhuong trinh vo nghiem.");
		}
		else if (delta == 0){
			x=-b/(2*a);
			printf("\nPhuong trinh co nghiem kep x = %.1f",x);	
		}
		else{
			x1= (-b + sqrt(delta))/(2*a);
			x2= (-b - sqrt(delta))/(2*a);
			printf("\nPhuong trinh co 2 nghiem rieng biet: ");
			printf("\n\tx1 = %.1f",x1);
			printf("\n\tx2 = %.1f",x2);
		}
	}
	return 0;
}

