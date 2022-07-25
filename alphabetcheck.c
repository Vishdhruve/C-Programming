#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter the value: ");
	scanf("%c",&alpha);
	
	if ((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
	{
		printf("It is an alphabet");
	}
	
	else
	{
		printf("It is not an alphabet");
	}
}
