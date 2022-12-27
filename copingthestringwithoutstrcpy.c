//program on ccoping the string without using string cpoy function
#include<stdio.h>
void main()
{
char str[19],cpy[19];
int i;
printf("enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
cpy[i]=str[i];
cpy[i]='\0';
printf("string copied is %s\n",cpy);
printf("the total number of charcaters %d\n",i);
}
