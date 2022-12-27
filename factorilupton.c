//program to check wether prime number or not for n numbers
#include<stdio.h>
void main()
{
int n,i,c=0;
printf("enter the range\n");
scanf("%d\n",n);
printf("neter the numbers between %d\n");
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        c++;
    }
    if(n%2==0)
        printf("n is prime\n");
    else
        printf("n is not prime\n");
}
}
