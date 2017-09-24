#include <stdio.h>

#define maxvals 10

int main(int argc, char const *argv[])
{
	int A[maxvals];
	printf("Enter as many as %d values:", maxvals );
	int n=0; int excess=0; int next;
	while(scanf("%d",&next) ==1){
		if(n==maxvals)
{			excess+=1;
		}else{
			A[n] = next;
			n+=1;
		}
	}

	printf("\n%d values read into array\n", n );
	if(excess){
		printf("%d values discarded\n", excess );
	}
	return 0;
}