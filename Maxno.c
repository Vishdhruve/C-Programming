#include<stdio.h>
int main()
{

	int a,b,c;
	
	printf("Enter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	printf("Enter Number 3: ");
	scanf("%d",&c);
	printf("a=%d \nb=%d \nc=%d", a, b,c);
	printf("\n%d",	(a>b && a>c) ? a : (b>a && b>c) ? b:c );
	
}
