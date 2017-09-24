#include <stdio.h>


int main(int argc, char const *argv[])
{
	int user, i;
	while(scanf("%d",&user)==1){
		printf("%d  |",user );
		for(i=0;i<user;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}