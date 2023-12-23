#include<stdio.h>
#include<string.h>
void main()
{
char str[20]="I am adifa saniya";
char search_str;
printf("enter search_Str");
gets(search_str);
char result;
result=strstr(str,search_str);
printf("%c",result);
}

