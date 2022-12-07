#include <stdio.h>

int main(void) {
  double x;
  do {
    printf("Enter x, (0,1 <= x <= 1) :\t");
    scanf("%lf", &x);
  }
  while (x > 0.1 && x < 1 );

  printf("Value corrected!");
  return 0;
}

// 0.1 <= x <= 1