#include <stdio.h>
int main() {
  double x;
  do {
    printf("Введите число x\n");
    scanf("%lf", &x);
  }
  while (x > 1);
  return 0;
}
