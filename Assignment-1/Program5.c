#include<stdio.h>

//RODATA  read only in data 

//
int main()
{
    char *p = "hello";
    p[0] = 'H';

    return(0);
}