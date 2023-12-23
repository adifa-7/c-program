#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int p,n;
printf("enter string");
scanf("%s",&str);
printf("enter position");
scanf("%d",&p);
printf("enter no of characters");
scanf("%d",&n);
strcpy(&str[p],&str[p+n]);
printf("%s",str[p+n]);
}

