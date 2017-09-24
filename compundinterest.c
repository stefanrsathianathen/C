#include <stdio.h>


#define MAX_YEARS 7
#define MIN_RATE 2
#define MAX_RATE 7


int main(int argc, char const *argv[]) {
  int month,rate,year;
  double balance, monthly_rate, MONTHLY;

  printf("Enter the Monthly Deposit: $");
  scanf("%lf",&MONTHLY );

  printf("Monthly savings of $%0.2f", MONTHLY );
  printf(",with monthly compound interest\n");
  printf("Annual Rate  |");
  for (rate=MIN_RATE; rate<=MAX_RATE; rate++){
    printf(" %4d%% ",rate);
  }
  printf("\n");

  for (year=1; year<=MAX_YEARS; year++){
    printf("After %1d years| ", year);
    for (rate=MIN_RATE; rate<=MAX_RATE; rate++){
      balance = 0.0;
      monthly_rate = 1.00 + ((rate/100.00)/12);
      for (month=1; month<=12*year; month++){
        balance *= monthly_rate;
        balance += MONTHLY;
      }
      printf(" %0.0f  ", balance);
    }
    printf("\n");
  }


  return 0;
}
