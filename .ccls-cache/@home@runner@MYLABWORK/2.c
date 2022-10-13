#include <stdio.h>
#include <math.h>

int madf()
{
	double x, ctg;
  printf("x:\t");
  scanf("%lf", &x);
  if (x > 0) {
    ctg = 1/tan(x);
    printf("S = %lf", (ctg - exp(sqrt(x))) / (log(fabs(5 * x)) + (atan(x) * atan(x))));
  } else {
    printf("Заданное значение переменной x не соответсвует ООФ (x > 0)");
  }
	return 0;
}
// Вычислить ооф а не только выводить