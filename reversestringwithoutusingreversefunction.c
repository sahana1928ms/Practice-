//program to print a string in reverse withoutusing string reverse finction
#include<stdio.h>
int main()
{
char str1[50],temp;
int i=0,j=0;
printf("enter a string\n");
scanf("%s",&str1);
j=strlen(str1)-1;
while(i<j)
{
temp=str1[j];
str1[j]=str1[i];
str1[i]=temp;
i++;
j--;
}
printf("reversed string is %s",str1);
}
