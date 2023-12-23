#include<stdio.h>
int prime(int n);
void main()
{
int n1,n2,i,temp;
printf("enter 2 numbers");
scanf("%d %d",&n1,&n2);
if(n1>n2)
{
 n1=n1+n2;
 n2=n1-n2;
 n1=n1-n2;
}
printf("prime nums bw %d and %d\n",n1,n2);
for(i=n1+1;i<n2;++i)
{
 temp=prime(i);
 if (temp==1)
 {
  printf("%d\t",i);
 }
}
}
int prime(int n)
{
int j,temp=1;
for(j=2;j<n/2;++j)
 {
  if(n%j==0)
  {
   temp=0;
  }
 }
return temp;
}
