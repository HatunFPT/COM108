#include <stdio.h>
#include <math.h>

int main(){
    float tienvay;
    printf("Nhap so tien muon vay: ");
    scanf("%d",&tienvay);
    float RATE=0.05;
    float tienlai=0;
    float tiengocphaithanhtoan=1000000;
    float tienphaithanhtoan=0;
    for(int i=1;i<=12;i++){
        printf("\n\tThang thu %d:",i);
        tienlai= tienvay*RATE;
        printf("\nTien lai phai tra = %.0f",tienlai);
        printf("\nTien goc phai tra = %.0f",tiengocphaithanhtoan);
        tienphaithanhtoan=tiengocphaithanhtoan+tienlai;
        printf("\nTien phai tra thang thu %d = %.0f",i,tiengocphaithanhtoan);
        tienvay=tienvay-tiengocphaithanhtoan;
    }
}