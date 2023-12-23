#include<stdio.h>
int fact(int n);
void main()
{
int n;
printf("enter n value");
scanf("%d",&n);
int result=fact(n);
printf("factorial of %d is %d",n,result);
}
int fact(int n)
{
int i,fact=1;
for (i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}

