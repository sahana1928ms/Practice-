//program on lcm and hcf of two numbers
#include<stdio.h>
int main()
{
int a,b,x,y,t,gcd,lcm;
printf("enter two integers\n");
scanf("%d %d",&x,&y);
a=x;
b=y;
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
gcd=a;
lcm=(x*y)/gcd;
printf("gcd of %d and %d id %d\n",x,y,gcd);
printf("lcm of %d and %d is %d\n",x,y,lcm);
return 0;
}
