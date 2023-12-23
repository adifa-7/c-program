#include<stdio.h>
void main()
{
int id;
char name[20];
float sal;
char response;
FILE *fp=fopen("a.dat","w");
char y,n;
do
{
printf("enter id");
scanf("%d",&id);
printf("enter name");
scanf("%s",name);
printf("enter salary");
scanf("%f",&sal);
fprintf(fp,"%d",id);
fprintf(fp,"%s",name);
fprintf(fp,"%f",sal);
printf("enter your response:y|n");
scanf("%c",&response);
}
while(response==y);
rewind(fp);
printf("\n \tid\t\tname\t\tsalary\t",id,name,sal);
while(scanf(fp,"%d",&id)!='%')
{
fscanf(fp,"%d",&id);
fscanf(fp,"%s",&name);
fscanf(fp,"%f",&sal);
fprintf("\td\t\ts\t\tf\t",id,name,sal);
}
fclose(fp);
}

