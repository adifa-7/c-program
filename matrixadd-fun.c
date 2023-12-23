#include<stdio.h>
void add(int a[3][3],int b[3][3]);
void main()
{
 int a[3][3],b[3][3],c[3][3];
 printf("add a,b");
 add (a,b);
}
void add(int a[3][3],int b[3][3])
{
 int i,j;
 for (i=0;i<3;i++)
 for (j=0;j<3;j++)
 {
  printf("enter elements of first matrix"); 
  scanf("%d",&a[i][j]);
  printf("enter elements of second matrix");
  scanf("%d",&b[i][j]);
 }
}
void display(int c[3][3])
{
 int i,j;
 int a[3][3],b[3][3];
 printf("sum of matrices is\n ");
 for (i=0;i<3;i++)
 for (j=0;j<3;j++)
 {
  c[i][j]=a[i][j]+b[i][j];
  printf("\t%d\t",c[i][j]);
 }
}
