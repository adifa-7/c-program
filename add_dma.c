#include<stdio.h>
void main()
{
int *a,*b,*c;
a=(int *)malloc(sizeof(int));
b=(int *)malloc(sizeof(int));
c=(int *)malloc(sizeof(int));
printf("enter a,b values");
scanf("%d %d",a,b);
*c=*a+*b;
printf("%d",*c);
}
