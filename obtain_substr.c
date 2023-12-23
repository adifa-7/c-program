#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,j,m,k;
printf("enter a string");
gets(str);
printf("enter position and no of cha");
scanf("%d %d",&i,&j);
m=i+j;
for(k=i;k<m;k++);
printf("%c",str);
}

