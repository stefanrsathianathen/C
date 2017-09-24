
#include <stdio.h>
#define PI 3.14159
int main(int argc, char const *argv[]) {
  double radius,volume;
  printf("Please input radius: ");
  scanf("%lf",&radius );
  volume = (4.0 *PI*radius*radius*radius)/(3.0);
  printf("When the radius is %.2f meters\n", radius);
  printf("The volume is %.2f cubic meters",volume);
  return 0;
}
