//program to extract the nibble
#include<stdio.h>
int main()
{
unsigned char num=0x08;
//unsigned char num;
num=num>>4;
printf("%c",num);
}
