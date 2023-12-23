#include<stdio.h>
int bin(int x);
void main()
{
int a,y;
printf("enter decimal no");
scanf("%d",&a);
y=bin(a);
printf("%d",y);
}
int bin(int x)
{
int b=0,i=1,r;
while(x>0)
{
 r=x%2;
 x=x/2;
 b=b+r*i;
 i=i*10;
}
return b;
}
