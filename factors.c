#include<stdio.h>
#include<stdlib.h>

int factors(int n);

int main(int argc, char const *argv[]){
	int u;
	printf("Enter number to find factors: ");
	scanf("%d",&u);
	printf("That number has %d factors\n",factors(u));
    
}

int factors(int n){
	int j;
	int counter = 0;
	for(j=1;j<=n;j++){
		if(n%j==0){
			counter++;
		}
	}
	return counter;
}