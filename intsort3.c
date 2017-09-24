#include <stdio.h>

void intsort2(int *c,int *d);
void insort3(int *e, int *f,int *g);

int main(int argc, char const *argv[])
{
	int a;int b;int h;
	a = 6;
	b = 3;
	h = 2;
	printf("%d %d %d\n",a,b,h );
	insort3(&a,&b,&h);
	printf("%d %d %d\n",a,b,h );
	return 0;
}
void intsort2(int *c,int *d){
	int temp;
	if (*c>*d){
		temp = *c;
		*c = *d;
		*d = temp;
	}
}
void insort3(int *e, int *f,int *g){
	
	intsort2(e,f);
	intsort2(f,g);
	intsort2(e,f);
	
}