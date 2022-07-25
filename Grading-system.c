#include<stdio.h>
int main()
{
	int Maths, Science, English, sum;
	float avg, percen;
	printf("Enter Marks of Maths: ");
	scanf("%d", &Maths);
	printf("Enter Marks of Science: ");
	scanf("%d", &Science);
	printf("Enter Marks of English: ");
	scanf("%d", &English);
	printf("Maths=%d|100\nScience=%d|100\nEnglish=%d|100\n", Maths, Science, English);
	sum = Maths + Science + English;
	printf("sum=%d\n", sum);
	avg = sum/3;
	printf("avg=%f", avg);
	percen =  (sum*100)/300;
	printf("\npercen=%f", percen);
	
	if(percen>75)
	{
		printf("\nDistinction");
	}
	
	else if (percen<=75 && percen>60)
	{
		printf("\nFirst Class");
	}
	
	else if (percen<=60 && percen>50)
	{
		printf("\nSecond Class");
	}
	
	else if (percen<=50 && percen>35)
	{
		printf("\nPass Class");
	}
	
	else
	{
		printf("\nFail");
	
	}
	
}
