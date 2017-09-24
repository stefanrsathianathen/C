#include <stdio.h>


int fac(int n);

int main(int argc, char const *argv[])
{
	int ue;
	printf("Enter a whole number: ");
	scanf("%d",&ue);
	printf("%d\n",fac(ue) );
	return 0;
}

int fac(int n){
	int re=0;

	for(int i = n;i>-1;i--){
		re += i*(i-1);
	}
	return re;
}