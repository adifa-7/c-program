#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100],c[100];
int p,i,j,k;
printf("enter main string");
scanf("%s",&a);
printf("enter sub string");
scanf("%s",&b);
printf("enter position");
scanf("%d",&p);
for(i=0;i<p;i++)
c[i]=a[i];
for(j=0;b[j]!='\0';j++)
c[i++]=b[j];
for(k=p;a[k]!='\0';k++)
c[i++]=a[k];
c[i]='\0';
printf("after inserting substring is %s",c);
}

