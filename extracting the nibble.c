#include<stdio.h>
#include<stdint.h>
void main()
{
    int8_t a=0x81,i=0;
    int bits=sizeof(a)*8;
    printf("size = %d bits\n",bits);
    int lsb=a&1;
    int msb=((a>>(bits-1))&1);
    printf("msb=%d,lsb=%d",msb,lsb);
}
