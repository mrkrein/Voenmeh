#include <stdio.h>
#include <math.h>

long long convert(int);

int fuckas() {
  int n, bin;
  printf("Введите десятичное цисло: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d в десятичной =  %lld в двоичной", n, bin);
  return 0;
}

long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}