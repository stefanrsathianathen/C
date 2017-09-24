#include <stdio.h>

#define MAXVAL 10

int main(int argc, char const *argv[])
{
	int A[MAXVAL];
	int x;
	x = 5;
	for(int i = 0; i<MAXVAL;i++){
		A[i] = i;
		x ++;
	}
	for (int j = 0;j<MAXVAL;j++){
		printf("%d\n",A[j] );
	}
	return 0;
}