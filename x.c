/*отображение вводимого значения в разных системах исчисления*/
#include  <stdio.h>

int main(void)
{
    int dec;
    printf("Введите целое число в десятичной системе и нажмите <Enter>\n");
    scanf("%d", &dec);
    printf("В восьмеричной системе данное число равно %o\nВ шестнадцатеричной системе данное число равно %x\n", dec, dec);
    return 0;
}
