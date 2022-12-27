//program to add two arrays
#include<stdio.h>
void main()
{
int arr1[5],arr2[5],arr3[20],sum,i,j,k,size;
printf("enter the size of array\n");
scanf("%d",&size);
printf("the elements of array1\n");
for(i=0;i<size;i++){
scanf("%d",&arr1[i]);
}
printf("the elements of array2\n");
for(i=0;i<size;i++){
scanf("%d",&arr2[i]);
}
printf("the sum of two arrays\n");
for(i=0;i<arr3[i];i++)
arr3[i]=arr1[i]+arr2[i];
for(i=0;i<size;i++)
printf("sum is %d\n",arr3[i]);
}

