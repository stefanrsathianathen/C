
#include <stdio.h>
#define Initial 2017

int getAge(int age);
int birthdayPassed();

int main(int argc, char const *argv[])
{
	int age; 
	int dif;

	age = getAge(age);
	dif = birthdayPassed();
	age+=dif;
	printf("You were born in : %d\n",Initial-age );
	
	return 0;
}
int getAge(int age){
	printf("Input your current age:");
	scanf("%d",&age);
	return age;
}
int birthdayPassed(){
	char red; 
	printf("Has your birthday passed this year(Y/N): ");
	scanf(" %c",&red);
	if (red == 'Y' || red == 'y'){
		return 0;
	}else{
		return 1;
	}
}