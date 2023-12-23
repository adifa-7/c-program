#include<stdio.h>
void add();
void main()
{
add();
}
void add()
{
int x,y,z;
printf("enter x,y values");
scanf("%d %d",&x,&y);
z=x+y;
printf("%d",z);
}

