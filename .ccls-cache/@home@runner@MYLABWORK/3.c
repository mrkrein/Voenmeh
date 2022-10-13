#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
  printf("a:\t");
  scanf("%d", &a);
  printf("b:\t");
  scanf("%d", &b);
  if (a == 0 || b == 0)
  {
    printf("Значения переменных не были изменены\n");
  } else {
    if (a < 0 && b < 0) {
      a--;
      b++;
    } 
    else if (a > 0 && b > 0) {
      (a > b) ? (a *= 2, b *= 3): (b *= 2, a *= 3);
    }
    else if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
      (a > b) ? (b = fabs(b)) : (a = fabs(a));
    }
  }
  printf("a:\t%d\nb:\t%d", a, b);
	return 0;
}
// Изменить последнее условие + действие