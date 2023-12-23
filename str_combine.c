#include<stdio.h>
#include<string.h>
void main()
{
char str[100],str1[100],str2[100];
int i=0,j=0;
printf("enter first string");
gets(str);
printf("enter second string");
gets(str1);
while(str[i]!='\0')
{
 str2[i]=str[i];
 i++;
}
while(str1[j]!='\0')
{
 str2[i]=str1[j];
 i++;
 j++;
}
str2[i]='\0';
printf("%s",str2);
}

