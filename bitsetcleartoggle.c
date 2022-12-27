//programs on set, clear
#include<stdio.h>
int setBit(int n,int  k)
{
return (n|(1<<(k-1)));
}
int clearBit(int n,int k)
{
    return (n&(~(1<<(k-1))));
}
int toggleBit(int n,int k)
{
    return (n^(1<<(k-1)));
}
int main()
{
int n=7,k=2;
printf("%d with %d-th bit set:%d\n",n,k,setBit(n,k));
printf("%d with %d-th bit clear:%d\n",n,k,clearBit(n,k));
printf("%d with %d-th bit toggle:%d\n",n,k,toggleBit(n,k));
}




