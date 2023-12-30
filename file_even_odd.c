#include<stdio.h>
void main()
{
	 	int n,num;
		printf("enter total numbers to be taken");
		scanf("%d",&n);
		FILE *fpevenfile = fopen("even.txt","w");
		FILE *fpoddfile = fopen("odd.txt","w");
	    if (fpevenfile == NULL || fpoddfile == NULL) 
		{
        	printf("Error opening files.\n");
       	 	return 1;
		}
		printf("Enter %d numbers:\n", n);
		for (int i = 0; i < n; i++) 
		{
			scanf("%d", &num);
			if (num % 2 == 0) 
			{
				fprintf(fpevenfile, "%d\n", num);
			} 
			else 
        	{
				fprintf(fpoddfile, "%d\n", num);
			}
 		}
fclose(fpevenfile);
fclose(fpoddfile);
printf("Even and odd numbers separated and stored in even.txt and odd.txt files.\n");
return 0;
}
