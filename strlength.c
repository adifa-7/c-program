#include<stdio.h>
#include<string.h>
void main()
{
char str[50];
int i=0;
printf("enter a string");
gets(str);
while (str[i]!='\0')
i++;
printf("the length of string is %d:",i);
}

