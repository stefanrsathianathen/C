#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int u; 
	printf("Enter number: ");
	if (scanf("%d",&u) != 1){
		exit(EXIT_FAILURE);
	}
	else{
		for (int i = 1; i <= u; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				printf("*");;
			}
			printf("\n");
		}
	}
	return 0;
}