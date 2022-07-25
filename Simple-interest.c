#include<stdio.h>
int main()
{
	int a, p, r, t;
	printf("Enter value of p: ");
	scanf("%d", &p);
	printf("Enter value of r: ");
	scanf("%d", &r);
	printf("Enter value of t: ");
	scanf("%d", &t);
	a= p*(1+r*t);
	printf("a=%d", a);
	
}
