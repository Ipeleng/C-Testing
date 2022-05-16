#include <stdio.h>
#include <math.h>

int main() {
  int x = 0;
  int *ptr = &x; //the "&" character means "the address of"
  printf("The variable X is at %p and has the value of %i", (void *)ptr, x);
  return 0;
}
