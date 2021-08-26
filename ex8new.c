//ex8new.c - упражнение 8, глава 2, Стивен Прата. Некоторые изменения, выходящие за рамки д. з.

/*===============================================================================*/

/*изначальный код восьмого упражнения второй главы из книги
#include <stdio.h>

void one_three(void);
void two(void);

int main() 
{

   printf("начинаем:\n");
   one_three();
   printf("порядок!\n");
   
    
return 0;
}


void one_three(void)
{printf("один\n");two();printf("три\n");}
  void two(void)
    {printf("два\n");}*/

/*===============================================================================*/

//несколько изменённая версия

#include <stdio.h>

int main(void);
void one_three(void);
void two(void);
void pseudomain(void); //замена деятельности main() другой функцией "псевдо-мейн"
void agrmain(void); // вызов main() из другой функции "агр-мейн"

int main(void) 
{printf("старт\n");
    pseudomain();
    agrmain();
}

void pseudomain(void)
{
   printf("начинаем:\n");
   one_three();
   printf("порядок!\n");
   
}


void one_three(void)
{printf("один\n");two();printf("три\n");}
  void two(void)
    {printf("два\n");}
    
//бесконечная программа

void agrmain(void)
{
main();}
