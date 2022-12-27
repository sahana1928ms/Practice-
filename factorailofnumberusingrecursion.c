//program to find factorail using recursion
#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));
}
int main()
{
    int number;
    int fact;
    printf("enter a number\n");
    scanf("%d",&number);
    fact=factorial(number);
    printf("factorial of %d is %d\n",number,fact);
}
