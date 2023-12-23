#include<stdio.h>
#include<string.h>
void main()
{
char name[20];
int i;
printf("enter name");
gets(name);
while(name[i]>0)
{
 printf("%c",name[i]);
 i++;
}
}

