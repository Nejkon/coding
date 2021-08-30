/*перевод целого числа из восьмеричной в десятичную систему исчисления*/
#include <stdio.h>
void sis(void);
int main(void)
{
  int ses;
  
  printf("Введите целое число в восьмеричной системе:\n");
  
sis();
  
return 0;

}
  
  
void sis(void)
{
    int ses;
  scanf("%d", &ses);
  printf("Число %o в десятичной системе равняется %d\n", ses, ses);
}















