//program to find the prime numbers between the range
#include<stdio.h>
int main()
{
int i,a=1,c;
while(a<=100)
{
c=0;
i=2;
while(i<=a/2)
{
if(a%i==0)
{
c++;
break;
}
i++;
}
if(c==0&&a!=1)
{
printf("%d\n",a);
}
a++;
}
return 0;
}
