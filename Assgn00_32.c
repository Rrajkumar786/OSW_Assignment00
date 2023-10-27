#include<stdio.h>
int main(){
int a, b, c;
printf("Enter in decimal format:\n"); 
scanf("%d", &a);
printf("Enter in octal format: \n"); 
scanf("%d", &b);
printf("Enter in hexadecimal format: \n"); 
scanf("%d", &c);
printf("a = %d, b = %d, c = %d \n", a, b, c); 
printf("Enter in decimal format:\n"); 
scanf("%i", &b);
printf("Enter in octal format: \n"); 
scanf("%i", &b);
printf("Enter in hexadecimal format: \n"); 
scanf("%i", &c);
printf("a = %i, b = %i, c = %i\n", a, b, c); 
return 0;
}
