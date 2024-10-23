#include<stdio.h>
main()
{
int a=2,b=5;
printf("Before swap: %d,%d\n",a,b);
swap(&a,&b);
printf("After swap :%d ,%d",a,b);
}
swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
