#include<stdio.h>
#include<string.h>
void main()
{
char str1[50],str2[50];
int i=0, j=0;
printf("enter string");
gets(str1);
while (str1[i]!='\0')
i++;
while (--i>=0)
{
str2[j]=str1[i];
j++;
}
str2[j]='\0';
printf("%s",str2);
}

