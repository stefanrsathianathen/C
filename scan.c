#include <stdio.h>

#define lbCon 2.2

int main(int argc, char const *argv[])
{
	double lb; 
	printf("Enter weight in pounds:");
	scanf("%lf",&lb);
	printf("Your weight in kg is: %.2f\n", lb/lbCon );
	return 0;
}