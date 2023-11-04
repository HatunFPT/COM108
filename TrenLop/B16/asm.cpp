#include <stdio.h>
#include <stdlib.h>

void thongtincanhan(){
    printf("\tNhap: \n");
    printf("Dat nuoc: ");
    char datnuoc[30];
    gets(datnuoc);
    printf("Thanh pho: ");
    char thanhpho[30];
    gets(thanhpho);
    printf("Duong: ");
    char duong[50];
    gets(duong);
    printf("So nha: ");
    int sonha;
    scanf("%d",&sonha);
    printf("\tXuat: \n");
    printf("Dat nuoc: %s\n",datnuoc);
    printf("Thanh pho: %s\n",thanhpho);
    printf("Duong: %s\n",duong);
    printf("So nha: %d\n",sonha);
}

int main(){
    int chonCN;
    do{
        printf("\n----------MENU----------\n");
        printf("1. Thong tin ca nhan.\n");
        printf("2. Xep loai nhan vien.\n");
        printf("3. Thong tin vat nuoi\n");
        printf("0. Thoat.\n");
        printf("\n----------MENU----------\n");
        printf("Moi chon chuc nang: ");
        scanf("%d",&chonCN);
        fflush(stdin);

        switch (chonCN){
            case 1:{
                printf("\tChuc nang 1: Thong tin ca nhan\n");
                thongtincanhan();
                break;
            }
            case 2:{
                printf("\tChuc nang 2: Xep loai nhan vien\n");
                float tuoi=-1;
                do{
                    do{
                        printf("Nhap tuoi: ");
                        scanf("%f",&tuoi);
                        if(tuoi<=0){
                            printf("Tuoi phai lon hon 0. Nhap lai!\n");
                        }
                    } while(tuoi<=0);
                    if(tuoi!=(int)tuoi){
                        printf("Tuoi la so nguyen. Nhap lai!\n");
                    }
                } while(tuoi!=(int)tuoi);
                if(tuoi < 18){
                    printf("Tuoi tre.\n");
                }
                else if(tuoi < 55){
                    printf("Tuoi lao dong.\n");
                }
                else {
                    printf("Tuoi gia.\n");
                }
                break;
            }
            case 3:{
                printf("\tChuc nang 3: Thong tin vat nuoi\n");
                break;
            }
            case 0:{
                printf("\tThoat!\n");
                exit(0);
                break;
            }
            default:{
                printf("\tKhong co chuc nang nay. Chon lai!\n");
            }
        }
    } while (1);
    
    return 0;
}