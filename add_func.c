#include<stdio.h>
int add(int x,int y);
void main()
{
int a,b;
printf("enter a,b values");
scanf("%d %d",&a,&b);
add(a,b);
}
int add(int x,int y)
{
int z;
z=x+y;
printf("addition of 2 num is:%d",z);
}

