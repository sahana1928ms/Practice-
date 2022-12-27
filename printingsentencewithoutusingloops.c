//program on printing the sentence n times without using loops
#include<stdio.h>
void print(char *sen,int count)
{
printf("%d:%s\n",count+1,sen);
count+=1;
if(count<50)
print(sen,count);
}
int main()
{
char sen[50];
printf("enter the sentence\n");
scanf("%s",&sen);
print(sen,0);
return 0;
}
