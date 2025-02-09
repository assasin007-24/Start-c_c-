#include <stdio.h>
void main(void)
{
    int valoare = 255;
    printf("Valoarea zecimala %d este %#o in octal\n", valoare, valoare);
    printf("Valoarea zecimala %d este %#x in hexazecimal\n", valoare, valoare);
    printf("Valoarea zecimala %d este %#X in hexazecimal\n", valoare, valoare);
}