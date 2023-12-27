#include<stdio.h>
void  main()
{/*transpose of mxn matr*/
int a[3][3],i,j,b[3][3];
printf("enter elmnts:\n");
for(i=0;i<3;i++)
for (j=0;j<3;j++)
scanf("%d",&a[i][j]);
for (i=0;i<3;i++)
for(j=0;j<3;j++)
b[i][j]=a[j][i];
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\t%d\t",b[i][j]);
}
printf("\n");
}
}

