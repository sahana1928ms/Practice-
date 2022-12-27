//29. search elemnts along with position
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int arr1[MAX_SIZE];
int size,i,tosearch,found;
printf("enter the size\n");
scanf("%d",&size);
printf("enter the elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the elements to search\n");
scanf("%d",&tosearch);
found=0;
for(i=0;i<size;i++)
{
if(arr1[i]==tosearch){
found=1;
break;
}
}
if(found==1)
printf("%d element found at postion %d\n",tosearch,i+1);
else
printf("%d elements is not found\n",tosearch);
}
