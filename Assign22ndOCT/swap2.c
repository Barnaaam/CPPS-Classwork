#include<stdio.h>
main()
{
int x=5,y=6;

printf("Before swap: %d,%d\n",x,y);
swap(x,y);
printf("After swap :%d,%d",x,y); 
}
swap(int a,int b)
{
int temp=a;
a=b;
b=temp;

}
