//program on spy number
#include <stdio.h>
int main()
{
    int n,s=0,p=1,d;
    printf("Enter any no ");
    scanf("%d",&n);
    for(;n>0;)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    printf("Sum of digits = %d Product of digits = %d\n",s,p);
    if(s==p)
        printf("Number is a Spy Number");
    else
        printf("Number is not a Spy Number");
    return 0;
}
