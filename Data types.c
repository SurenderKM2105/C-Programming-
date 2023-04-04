#include<stdio.h>

int main()

{

int a=10;

printf("%d \n",a);// prints 10

int a1=010;

printf("%d \n",a1);// prints decimal equivalent of octal number 10 , result is 8

int b=0x41;

printf("%d \n",b);// prints decimal equivalent of hexadecimal 41, which is 65

int c= 12.5;

printf("%d \n",c);// 12 :  truncates digits after decimal point

int d= 12.4;

int e= 12.9;

printf("%d \n  %d \n",d,e);// 12 12 

 // this will not round off...

 

return 0;

}

