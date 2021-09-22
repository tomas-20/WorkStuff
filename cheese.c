#include <stdio.h>
void print_number(int n) {
  printf("%d\n", n);
}
int expt(int a, int b) {
  if (b == 0) {
    return 1;
  }
  else {
    return a * expt(a, b - 1);
  }
}
int main() {
  int bob = 2187;
  int joe = 276;
  print_number(bob + joe);
  print_number(bob * joe);
  print_number(bob / joe);
  print_number(expt(3, 7));
}
