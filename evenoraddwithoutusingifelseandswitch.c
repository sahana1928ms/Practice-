//program to print even or add without using if-else and switch
#include<stdio.h>
void main() {
   int n;
   char* arr[2] = {"Even", "Odd"};
   printf("Enter a number: ");
   scanf("%d", &n);
   printf("The number is: %s", arr[n%2]);
}
