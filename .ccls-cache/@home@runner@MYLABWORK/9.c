#include <stdio.h>

int asdqwdeasd() {
  int InputNum = 1;
  while (InputNum != 0 ) {
    printf("Введите целое натуральное число: ");
    scanf("%d", &InputNum);
    int result = 1;
        int counter = 0;
        while (result < InputNum) {
            counter++;
            result = result * counter;
        }
    if (InputNum == result) {
            printf("Число %d является факториалом числа  %d\n", InputNum, counter);
        } else {
             printf("Число %d не является факториалом ни одного из чисел\n",InputNum);
        }
  }
  printf("Ввод завершен"); 

    return 0;
}