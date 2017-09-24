#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int us; char *d;
	d = &us;
	printf("Enter a number:");
	scanf("%c",&us);
	printf("%d\n", atoi(*d) );
	return 0;
}