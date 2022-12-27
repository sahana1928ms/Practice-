//program to check wether the character is alphabet is or not
#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        printf("it is alphabet\n");
    else if(ch>='0'&&ch<='9')
        printf("it is number\n");
    else
        printf("it is special charcter\n");
}
