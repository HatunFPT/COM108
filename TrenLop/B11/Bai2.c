#include <stdio.h>
#include <math.h>

// Function
int checkYear(int a){
    int check = 0;
    if (a%400 == 0){
        check = 1;
    }
	
    if (a%4 == 0 && a%100 != 0){
    	 check = 1;
	}
	
    return check;
}

int main(){
    do{
        int year;
        printf("\nMoi nhap nam can kiem tra: ");
        scanf("%d", &year);
        //printf("\n%d",checkYear(year));
        if(checkYear(year)==1){
        	printf("Day la nam nhuan.");
		}
		else
			printf("Day khong la nam nhuan.");
    } while (1);

    return 0;
}