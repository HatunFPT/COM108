#include <stdio.h>
int main(){

char chuoi[100];
int i=0, nguyenam=0, phuam=0, cach;
printf("Enter string: ");
gets(string);
//puts(string);
while(chuoi[i]!='\0'){
if((chuoi[i]=='a') || (chuoi[i]=='A')
				|| (chuoi[i]=='e')
|| (chuoi[i]=='E')
||(chuoi[i]=='i')
|| (chuoi[i]=='I')
||(chuoi[i]=='o')
|| (chuoi[i]=='O')
||(chuoi[i]=='u')
){
|| (chuoi[i]=='U')
nguyenam++;
}
else if(chuoi[i]==''){
cach++;
}else {

phuam++;
}

}
printf("Nguyen am: %d, wife: %d, page space: %d",nguyenam, phuam,cach);
}

