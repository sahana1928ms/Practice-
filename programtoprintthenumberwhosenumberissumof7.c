//program to print the two digit numbers whose sum of digit is multiple of 7
#include<stdio.h>
void main()
{
int i,n,sum,f;
printf("enter the number\n");
scanf("%d",&n);
i=n%10;
f=n/10;
//for(i=7;i>70;i+9)
printf("the number of first and last digit is %d %d\n",f,i);
sum=i+f;
printf("sum of digit %d\n",sum);
}
