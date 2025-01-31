#include <stdio.h>
void main(void)
{
    int valoare = 5;
    printf("Numarul 0.1234 este afisat in formatul %g\n", 0.1234);
    printf("Numarul 0.00001234 este afisat in formatul %g\n", 0.00001234);
    printf("%01\n", valoare);
    printf("%02\n", valoare);
    printf("%03\n", valoare);
    printf("%04\n", valoare);
}