#include<stdio.h>
void main()
{
struct book
{
int pages;
float price;
char name[30];
};
struct book b1[100];
int n;
int i;
printf("enter no of books");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter no of pages");
scanf("%d",&b1[i].pages);
printf("enter price");
scanf("%f",&b1[i].price);
printf("enter name");
scanf("%s",&b1[i].name);
}
printf("books are: ");
for(i=0;i<n;i++)
{
printf("%d\n",b1[i].pages);
printf("%f\n",b1[i].price);
printf("%s\n",b1[i].name);
}
}

