#include<stdio.h>
void square(int a);
int main()
{
int i;
printf("enter the value");
scanf("%d",&i);
square(i);
}
void square(int a)
{
int square_num;
square_num=a*a;
printf("%d",square_num);
}
