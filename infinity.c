/*бесконечная программа*/

#include <stdio.h>

void main(void);
void infinity(void);

void main(void)
{
    printf("Бесконечность не предел!\n");
    infinity();
}

void infinity(void)
{
    printf("Летим!\n");
    main();
}
