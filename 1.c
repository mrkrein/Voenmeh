#include <stdio.h>
#include <math.h>

int maas()
{
	double x, y;
	printf("x:\t");
	scanf("%lf", &x);
	printf("y:\t");
	scanf("%lf", &y);
  printf("f = %.5lf", (x <= 0 && y < 0) ? y * y - x : (x > 0) ? x - fabs(y) : y + 1);
	return 0;
}
// Упростить проверку (одно сравнение)