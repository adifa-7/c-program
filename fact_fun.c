#include <stdio.h>
int fact();
void main()
{
int result=fact();
printf("%d",result);
}
int fact()
{
int i,fact=1,n;
printf("enter n value");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}

