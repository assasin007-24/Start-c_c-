#include <stdio.h>
void main(void)
{
    char *near_titlu = "Totul despre C/C++";
    char *far_titlu = "Totul despre C/C++";
    printf("Titlul cartii este: %Ns\n", near_titlu);
    printf("Titlul cartii este: %Fs\n", far_titlu);
}