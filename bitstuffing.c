//program on bit stuffing
#include<stdio.h>
int main()
{
int i,a,b,c,d,e;
printf("enter the boolean values\t");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a==0&&b==0&&c==0&&d==0&&e==0||a==1&&b==1&&c==1&&d==1&&e==1)
{
printf("this is bit stuffing\n");
printf("enter a 6th opposite bit\n");
scanf("%d",&i);
if(a==b&&c==d&&e!=i)
{
printf("bit stuffing done\n");
}
else
{
printf("its not opposite bit");
}
}
else
{
printf("this does not goes for bit stuffing");
}
}
