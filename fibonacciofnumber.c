//program on fibonacci
#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i,n;
printf("enter the number of elements\t");
scanf("%d",&n);
printf("%d %d\n",n1,n2);
for(i=2;i<n;i++)
{
n3=n1+n2;
printf("%d\n",n3);
n1=n2;
n2=n3;
}
return 0;
}
