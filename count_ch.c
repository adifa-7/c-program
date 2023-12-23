#include<stdio.h>
#include<string.h>
void main()
{
int nc=0,nw=0,nl=0;
char str[100],ch;
printf("enter text");
scanf("%s",&str);
while((ch=getchar())!='%')
{
++nc;
if(ch=='\n')
++nl;
if(ch==' '||ch=='\n'||ch=='\t')
++nw;
}
printf("%d %d %d",nc,nw,nl);
}
