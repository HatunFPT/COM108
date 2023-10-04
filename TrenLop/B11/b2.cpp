#include <stdio.h>
#include <math.h>

// Function
int max(int a,int b,int c){
	int max;
    if(a<=b){
    	if(b<=c){
    		max=c;
		}
		else max =b;
	}
	else {
		if(a<=c){
    		max=c;
		}
		else max =a;
	}
	return max;
}

int main(){
	do{
		int a,b,c;
		printf("\nNhap a: ");
		scanf("%d",&a);
		printf("Nhap b: ");
		scanf("%d",&b);
		printf("Nhap c: ");
		scanf("%d",&c);
		printf("max cua 3 so la %d",max(a,b,c));
	}while(1);
    return 0;
}

