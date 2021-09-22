#include <stdio.h>
void print_number(int n) {
  printf("%d\n", n);
}
int main() {
  int bob = 2187;
  int joe = 276;
  print_number(bob + joe);
  print_number(bob * joe);
  print_number(bob / joe);
}
