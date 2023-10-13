#include <stdio.h>

int main (){
	//b1 nhap ten dia chi que quan cua hang xom
	//khai bao
	char ten[50];
	char diachi[100];
	char quequan[100];
	//In
	printf("Moi nhap ten: ");
//	scanf("%[^\n]",ten);
	gets(ten);
	printf("Moi nhap dia chi: ");
	gets(diachi);
//	scanf("%[^\n]",diachi);
	printf("Moi nhap que quan: ");
//	scanf("%[^\n]",quequan);	
	gets(quequan);
	//Out
	printf("\nThong tin vua nhap:\n");
	printf("\tTen: %s\n",ten);
	printf("\tDia chi: %s\n",diachi);
	printf("\tQue quan: %s\n",quequan);
	return 0;
}

