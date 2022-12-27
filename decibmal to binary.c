#include<stdio.h>
void main()
{
unsigned char num=10;
int i;
for(i=7;i>0;i--)
{
num=(num>>i)1;
printf("%d",num);
}
}
