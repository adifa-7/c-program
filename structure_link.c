#include<stdio.h>
struct node
{
int data;
struct node* link;
};
void main()
{
struct node* obj1,obj2;
struct node* link;
int data;
obj1.link=&obj2;
obj1.data=10;
obj1.link=NULL;
obj2.data=20;
obj2.link=NULL;
printf("%d",obj1.data);
printf("%d",obj2.data);
}

