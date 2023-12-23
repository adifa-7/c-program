#include<stdio.h>
int gcd(int x,int y);
void main()
{
int a,b;
printf("enter a,b values");
scanf("%d %d",&a,&b);
gcd(a,b);
}
int gcd(int x,int y)
{
int r;
while (y!=0)
{
 r=x%y;
 x=y;
 y=r;
}
printf("%d",y);
}

