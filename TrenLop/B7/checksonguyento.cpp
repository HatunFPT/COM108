#include <stdio.h>
#include <math.h>

int main(){
	int n,  check=1;
	printf("\nNhap so nguyen can check ");
	scanf("%d", &n);
	if(n<=1){
		printf("\n%d khong phai la so nguyen to.",n);
	}
	else {
		for(int i=2; i<n; i++){
			if(n% i == 0){
				check=0;
				break;
			}
		
		}
		if(check == 1){
			printf("\n%d la so nguyen to.",n);
		} 
		else
			printf("\n%d khong phai la so nguyen to.",n);
	}
	
	return 0;
}

