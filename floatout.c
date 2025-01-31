#include <stdio.h>
void main(void)
{
    float pret = 525.75;
    float rata_impozit = 0.06;

    printf("Pretul este %f\n", pret);
    printf("Impozitul pe vanzari este %f\n", pret * rata_impozit);
}