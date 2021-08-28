#include <stdio.h>
int main(void);

int main(void)
{
  float inch;
  float cm;
  
  printf("Переведём дюймы в сантиметры.\nВведите значение в дюймах:\n");
  scanf("%f", &inch);
  cm = inch * 2.54;
  printf("Хорошо, идёт подсчёт\n....\n....\n....\nПодсчёт завершён\n%f дюйм(ов) = %f сантиметр(ов)!\n", inch, cm);
  return 0;
}
