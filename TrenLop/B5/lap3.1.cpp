#include <stdio.h> 
int main() { int i = 1; int s = 1; for(;;){ if(i>5){ break; } s+=i; i++; } printf("%d",s);};
