// greatest of 3 numbers
#include<stdio.h>
#include<math.h>
int main()
{
int a=9,b=13,c=19;
if(a>=b && a>=c)
    printf("a is greater %d",a);
if(b>=a && b>=c)
    printf("b is greater %d",b);
if(c>=a && c>=b)
    printf("c is greater %d",c);
}
