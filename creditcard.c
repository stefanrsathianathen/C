#include <stdio.h>

main() {
  int num = 1234;
  char card[6];
  sprintf(card,"%d",num);
  printf("%c\n", card[2]);
  return 0;
}
