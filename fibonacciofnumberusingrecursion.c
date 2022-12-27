//program on fibonacci using recursion
#include<stdio.h>
int printfibonacci(int n)
{
int n1=0,n2=1,n3;
if(n>0){
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d",n3);
printfibonacci(n-1);
}
}
int main()
{
int n;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("%d %d\n",0,1);
printfibonacci(n-2);
return 0;
}
