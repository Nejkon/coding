#include <stdio.h>

void base(void); //принимает значение в int (d) (и выводит его на экран)
void swim(void); //переводит значение из int (d) в float (d)
void ok(void); //переводит значение из int (d) в int (o)
void sis(void); //переводит значение из int (d) в int (x)

void swim1(void); //принимает значение в float (d) (и выводит его на экран)
void base1(void); //переводит значение из float (d) в int (d)
void ok1(void); //переводит значение из int (d) в int (o)
void sis1(void); //переводит значение из int (d) в int (x)

void ok2(void); //принимает значение в int (o) (и выводит его на экран)
void base2(void); //переводит значение из int (o) в int (d)
void swim2(void); //переводит значение из int (d) в float (d)
void sis2(void); //переводит значение из int (d) в int (x)

void sis3(void); //принимает значение в int (x) (и выводит его на экран)
void base3(void); //переводит значение из int (x) в int (d)
void swim3(void); //переводит значение из int (d) в float (d)
void ok3(void); //принимает значение в int (d) int (o)

void base(void); //принимает значение в int (d) (и выводит его на экран)
void swim(void); //переводит значение из int (d) в float (d)
void ok(void); //переводит значение из int (d) в int (o)
void sis(void); //переводит значение из int (d) в int (x)

int main(void);

int main(void)
{
  base();
  swim();
  ok();
  sis();
  swim1();
  base1();
  ok1();
  sis1();
  ok2();
  base2();
  swim2();
  sis2();
  sis3();
  base3();
  swim3();
  ok3();
  base();
  swim();
  ok();
  sis();
  
return 0;
}


//1. функция приёма значения в int (d) и вывода этого значения на экран
void base(void)
{
  int ind;
  printf("Введите целое значение в десятичной форме\n");
  scanf("%d", &ind);
  printf("Вы ввели значение %d\n", ind);
}

//2. функция перевода значения из int (d) в float (d) и вывода значения на экран

void swim(void)
{
  printf("Ввиде числа с плавающей запятой %d будет ");
  float fld = ind;
  printf("равняться %.2f.\n");
}

//3. функция перевода значений в целое восьмеричное 

void ok(void)
{
  printf("В восьмеричной системе целое десятичное число %d будет равняться %o\n", ind, ind);
}

//4. функция перевода значений в целое шестнадцатеричное

void sis(void)
{
  printf("В шестнадцатеричной системе целое десятичное число %d будет равняться %x\n", ind, ind);
}

//5. функция приёма значения в float (d) и вывода этого значения на экран

void swim1(void)
{
  printf("Введите число с плавающей запятой в десятичной форме\n");
  scanf("%f", &fld);
  printf("Вы ввели значение %.2f\n", fld);
}

//6. функция перевода значения в целое десятичное
{
  printf("В десятичной целой системе число с плавающей запятой %.2f ");
  ind = fld;
  printf("будет равняться %d\n", ind);
}

//7.
  
