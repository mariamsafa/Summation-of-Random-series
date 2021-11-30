/*
//Summation of 1/1^2 + 1/2^2 + 1/3^2 +....+1/N^2 series
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	double sum = 0;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1/pow(i, 2);
	}
	printf("\nThe summation of this series is %lf \n", sum);


	return 0;
}

//summation of 1/1^1 + 1/2^2 + 1/3^3 +....+1/N^N series
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	double sum = 0;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1 / pow(i, i);
	}
	printf("\nThe summation of this series is %lf \n", sum);


	return 0;
}

//summation of 10^2 + 20^2 + 30^2 +....+N^2 series
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	double sum = 0;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 10; i <= n; i+=10)
	{
		sum = sum + pow(i, 2);
	}
	printf("\nThe summation of this series is %.2lf \n", sum);


	return 0;
}
*/
//summation of 100^2+95^2+90^2+.....+
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	double sum = 0;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 10; i <= n; i += 10)
	{
		sum = sum + pow(i, 2);
	}
	printf("\nThe summation of this series is %.2lf \n", sum);


	return 0;
}