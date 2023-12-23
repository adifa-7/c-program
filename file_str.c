#include<stdio.h>
#include<string.h>
void main()
{
char str[50];
char fname[10];
FILE *fp;
printf("enter file name");
gets(fname);
fp=fopen(fname,"w");
printf("enter string");
do
{
gets(str);
strcat(str,"\n");
fputs(str,fp);
}
while(*str!='%');
fclose(fp);
}
