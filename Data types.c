#include<stdio.h>
int main()
{
int a=10;
printf("%d",a);// prints 10
int a1=010;

printf("%d",a1);// prints decimal equivalent of octal number 10 , result is 8
int b=0x41;
printf("%d",b);// prints decimal equivalent of hexadecimal 41, which is 65
return 0;
}
