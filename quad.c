#include <stdio.h>
#include <math.h>

/*Simple quadratic equation program*/

int main(int argc, char const *argv[]) {
  double a,b,c,d,ro1,ro2;

  printf("Enter A, B, C: ");
  scanf("%lf %lf %lf",&a, &b ,&c);

  
  d = (b*b)-(4*a*c);

  if(d<0){
  	printf("No real roots");
  }else if(a == 0 || b == 0){
  	printf("Error use another way to find the roots\n");
  }else{
  	ro1 = (-b + sqrt(d))/(2*a);
  	ro2 = (-b - sqrt(d))/(2*a);

  	printf("Root 1:%f   Root 2:%f  \n",ro1,ro2 );
  }


  return 0;
}
