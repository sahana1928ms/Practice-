// program to do modulo divisor without using modules operators
#include<stdio.h>
int main()
{
int d,q,n,rem;
printf("enter the num and divider\n");
scanf("%d %d",&n,&d);
q=n/d;
rem=n-(d*q);
printf("modulo=%d\n",rem);
}
