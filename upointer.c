#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x = 5, *u;
	u = &x;
	*u = *u+1;
	printf("%p\n",&x );
	printf("%d\n",*u );
	printf("%d\n",x );
	return 0;
}