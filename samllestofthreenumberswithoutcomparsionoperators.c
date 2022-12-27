//program to find the smallest of three nunebrs without using comparsion operators
#include<stdio.h>
int smallest(int x,int y,int z)
{
int c=0;
while(x&&y&&z){
x--;
y--;
z--;
c++;
}
return c;
}
int main()
{
int x=12,y=15,z=4;
printf("minimun of three is %d\n",smallest(x,y,z));
}
