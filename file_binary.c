#include<stdio.h>
struct bank
{
int acno;
char name[30];
float bal;
};
void main()
{
FILE *fp;
fp=fopen("a.bin","wb");
struct bank b1;
while(b1!='%')
{
printf("enter acno");
scanf("%d",&b1.acno);
printf("enter name");
scanf("%s",&b1.name);
printf("enter balance");
scanf("%f",&b1.bal);
fwrite(&b1,sizeof(b1),1,fp);
}
fclose(fp);
}

