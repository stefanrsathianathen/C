#include <stdio.h>
#define Mul 0.5555555556
int main(int argc, char const *argv[]) {
  double fah;
  printf("Input Fahrenheit to convert: ");
  scanf("%lf", &fah  );
  printf("%.2f Celius\n",  (fah-32)*Mul );
  return 0;
}
