#include <stdio.h>
void print_number(int n) {
  printf("%d\n", n);
}
void print_double(double n) {
  printf("%lf\n", n);
}
int expt(int a, int b) {
  if (b == 0) {
    return 1;
  }
  else {
    return a * expt(a, b - 1);
  }
}
int expt2(int a, int b) {
  int output = 1;
  while (b > 0) {
    output *= a;
    b --;
  }
  return output;
}
double sqrt(double n) {
  double guess = n / 2;
  int i;
  for (i = 0; i < 100; i ++) {
    guess = (guess + n / guess) / 2;
  }
  return guess;
}
int main() {
  int bob = 2187;
  int joe = 276;
  print_number(bob + joe);
  print_number(bob * joe);
  print_number(bob / joe);
  print_number(expt(3, 7));
  print_number(expt2(3, 7));
  print_double(sqrt(5.0));
  print_number(10 == 10);
  int aaa;
  int eee;
  printf("%d   %d\n", aaa, eee);
  if (0) {
    printf("0 is true");
  }
  if (0.0) {
    printf("0.0 is true");
  }
}
