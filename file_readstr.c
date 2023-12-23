#include<stdio.h>
#include<stdlib.h>
void main()
{
char str[50];
char fname[10];
FILE *fp;
printf("enter file name");
gets(fname);
fp=fopen(fname,"r");
printf("strings are");
if(fp==NULL)
{
printf("file not found");
exit(0);
}
while(fgets(str,50,fp)!=EOF)
puts(str);
fclose(fp);
}

