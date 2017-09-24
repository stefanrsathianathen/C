#include <stdio.h>



int cal(double n);

int main(int argc, char const *argv[]) {
  double change;

  printf("O hai! How much change is owed?\n");
  scanf("%lf", &change );
  printf("Coins: %i \n", cal(change) );
  return 0;
}

int cal(double n){
  int coin = 0;
  while (n> 0){
    if (n-.25>=0){
      n = n-.25;
      coin++;
    }
    else if (n-.10 >=0){
      n-=.10;
      coin++;
    }else if (n-.05>=0){
      n-=.05;
      coin++;
    }else{
      n-=.01;
      coin ++;
    }
  }

  return coin;
}
