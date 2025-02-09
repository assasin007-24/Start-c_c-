#include <stdio.h>
void main(void)
{
    int val_int = 5;
    float val_flt = 3.33;
    printf("Aliniere dreapta %5d a valorii\n", val_int);
    printf("Aliniere stanga %-5d a valorii\n", val_int);
    printf("Aliniere dreapta %7.2f a valorii\n", val_flt);
    printf("Aliniere stanga %-7.2f a valorii\n", val_flt);
}