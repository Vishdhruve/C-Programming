#include<stdio.h>
int main ()
{
	int i,x;
	printf("Enter any number between 1 to 100: ");
	scanf("%d", &x);
	
	for(i=1; i<=10; i++)
	{
		printf("%d X %2d = %2d\n", x, i, i*x);
	}
	
}

