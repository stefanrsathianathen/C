#include <stdio.h>

double savings_plan(double initial,double amount, double ann_rate, int years);

int main(int argc, char const *argv[]) {
  int years;
  double rate, per_month, answer, initial;

  printf("Enter number of years  :");
  scanf("%d", &years);
  printf("Annual rate (%%)  :");
  scanf("%lf", &rate);
  printf("Enter monthly amount  : $");
  scanf("%lf", &per_month);
  printf("Enter initial balance  : $");
  scanf("%lf",&initial);


  printf("Saving $%.0f per month for %d years\n", per_month, years);
  answer = savings_plan(initial,per_month, rate-1,years);
  printf("\tat %.1f%% per year: $%.0f\n", rate-1,answer );
  answer = savings_plan(initial,per_month,rate, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate,answer );
  answer = savings_plan(initial,per_month,rate+1, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate+1,answer );
  return 0;
}

double savings_plan(double initial,double amount, double ann_rate, int years){
  int month;
  double monthly_mult, balance=initial;
  monthly_mult = 1.00 + (ann_rate/100.00)/12;
  for (month=1; month<=12*years; month++){
    balance *= monthly_mult;
    balance += amount;
  }
  return balance;
}
