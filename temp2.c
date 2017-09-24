#include <stdio.h>
#include <stdlib.h>

void fToC(double temp);
void cToF(double temp);

int main(int argc, char const *argv[])
{
	double us; char t;

	printf("Enter a unit and it will be converted:");
	if(scanf("%lf%c",&us,&t) !=2){
		printf("Error in Input");
		exit(EXIT_FAILURE);
	}
	else if (t=='F'||t=='f'){
		fToC(us);
	}else if(t=='C'||t=='c'){
		cToF(us);
	}

	return 0;
}

void fToC(double temp){
	printf("%.2fC\n",(temp-32)*.5556 );
}
void cToF(double temp)	{
	printf("%.2fF\n",(temp*1.8) + 32);
}