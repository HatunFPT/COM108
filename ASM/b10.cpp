#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ucln(int n,int m){
	int ts=n,ms=m;
	while(ts!=ms){
		if(ts>ms){
			ts-=ms;
		} else{
			ms-=ts;
		}
	}
	return ts;
}
int main (){
	//khaibaoo
	int uc;
	int tuso1,mauso1,tuso2,mauso2;
	//nhap
	printf("nhap tu so: ");
	scanf("%d",&tuso1);
	printf("nhap mau so: ");
	scanf("%d",&mauso1);
	printf("nhap tu so: ");
	scanf("%d",&tuso2);
	printf("nhap mau so: ");
	scanf("%d",&mauso2);
	//run
	//tong
	int tusotong=tuso1*mauso2+tuso2*mauso1;
	int mausotong=mauso1*mauso2;
	uc=ucln(tusotong,mausotong);
	tusotong=tusotong/uc;
	mausotong=mausotong/uc;
	printf("tong 2 phan so la: %d/%d\n",tusotong,mausotong);
	//hieu
	printf("Hieu\n");
	int tusohieu,mausohieu,uc1;
	tusohieu=tuso1*mauso2-tuso2*mauso1;
	mausohieu=mauso1*mauso2;
	printf("Hieu\n");
	uc1=ucln(tusohieu,mausohieu);
	printf("Hieu\n");
	tusohieu=tusohieu/uc1;
	printf("Hieu\n");
	mausohieu=mausohieu/uc1;
	printf("hieu 2 phan so la: %d/%d\n",tusohieu,mausohieu);
	return 0;
}

