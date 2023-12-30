#include<stdio.h>

int prime(int num)
{
		if(num<2)
		{
				return 0;
		}
		for(int i=2;i*i<=num;i++)
		{
				if(num%i==0)
				{
						return 0;
				}
		}
		return 1;
}
int linearsearch(int arr[],int size)
{
		for (int i=0;i<size;i++)
		{
				if(prime(arr[i]))
				{
						return arr[i];
				}
		}
		return 0;
}
int main()
{
		int size;
		printf("enter size of array: ");
		scanf("%d",&size);
		int n[size];
		printf("enter %d n:\n",size);
		for (int i=0;i<size;i++)
		{
				scanf("%d",&n[i]);
		}
		int result=linearsearch(n,size);
		if (result!=0)
		{
				printf("first prime numbeer found in array is: %d\n",result);
		}
		else
		{
				printf("no prime number found \n");
		}
}

