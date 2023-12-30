#include <stdio.h>
int factorial(int num) 
{
int fact = 1;
for (int i = 1; i <= num; ++i) 
{
fact *= i;
}
return fact;
}
int StrongNumber(int num) 
{
int n = num;
int sum = 0;
while (num > 0) 
{
int r = num % 10;
sum += factorial(r);
num /= 10; 
}
return (sum == n); 
}
int main() 
{
int number;
printf("Enter a number: ");
scanf("%d", &number);
if (StrongNumber(number)) 
{
printf("%d is a strong number.\n", number);
}
else 
{
printf("%d is not a strong number.\n", number);
}
}
