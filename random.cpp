#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int random(int min, int max){
	int x=0;
	x= min + rand() % (max+1-min);
}
int main (){
	for(int i=1;i<=10;i++){
			printf("%d",random(1,5));
	}

	return 0;
}

