#include <stdio.h>
#include <math.h>

int msdf() {
  int n, modif; // обьявляем две переменные, тип int
  double x, y; // Обьявляем две переменные, тип double
  printf("Введите n (n > 10) = "); // Выводим сообщение на экран
  scanf("%d", &n); // Записываем введенное значение в переменную n
  printf("Введите x = "); // Выводим сообщение на экран
  scanf("%lf", &x); // Записываем введенное значение в переменную x
  if (n <= 10) { // Условие
    printf("Введите n > 10 !!!"); // Выводим сообщение на экран 
  } else { // Иначе
    y=0; // Присваиваем переменной значение
    for (modif = 0; n - modif != 0; modif++) { // Цикл с предусловием for
      y += (n - modif) * cos((modif+1) * x); // Присваиваем переменной значение, увеличивая ее предыдушее значение
    }
  }
  printf("y = %lf", y); // Выводим сообщение на экран 
  return 0;
}