//program on structure padding
#include<stdio.h>
struct abc
{
char c;
double d;
char a;
int b;

}s;
void main()
{
    struct abc s;
printf("size: %d\n",(sizeof(s)));
}
