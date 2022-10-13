#include <stdio.h>
#include <math.h>

int main() {
  int n, modif;
  double x, y;
  printf("Введите n (n > 10) = ");
  scanf("%d", &n);
  printf("Введите x = ");
  scanf("%lf", &x);
  if (n <= 10) {
    printf("Введите n > 10 !!!");
  } else {
    y=0;
    for (modif = 0; n - modif != 0; modif++) {
      y += (n - modif) * cos((modif+1) * x);
    }
  }
  printf("y = %lf", y);
  return 0;
}