#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function không tham số truyền vào, không trả về dữ liệu sử dụng "void"
// void tinhTong(){
//     //khai báo
//     int a,b,tong;
//     //nhap gtri
//     printf("\na = "); scanf("%d",&a);
//     printf("b = "); scanf("%d",&b);
//     tong = a+b;
//     printf("\n\tTong = %d", tong);
// }

//function truyền vào tham số
// void tinhTong(int a, int b){
//     int tong;
//     tong = a+b;
//     printf("\n\tTong = %d", tong);
// }
//function trả về giá trị
int tinhTong(int a,int b){
    int tong=a+b;
    return tong;
}
int main(){
    // printf("Thuc hanh ham khong truyen vao gtri, khong tra ve gtri");
    // tinhTong();
    //printf("\nThuc hanh ham truyen vao tham so: ");
    int c,d;
    int a=10, tong;
    printf("\nc = "); scanf("%d",&c);
    printf("d = "); scanf("%d",&d);
    tong = tinhTong(c,d)+a;
    printf("\nTong = %d",tong);
    return 0;
}