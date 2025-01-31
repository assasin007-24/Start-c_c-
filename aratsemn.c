#include <stdio.h>
void main(void)
{
    int neg_int = -5;
    int poz_int = 5;
    float neg_flt = -100.23;
    float poz_flt = 100.23;
    printf("Valoarea intreaga este %+d si %+d\n", neg_int, poz_int);
    printf("Valoarea in virgula mobila este %+f %+f\n", neg_flt, poz_flt);
}