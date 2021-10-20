#include <stdio.h>

/*
*
* Program na ukazku zopar datovzch typov
* Autor: Tomas Lukac
*
*/

int main(void)
{
    printf("Program na rozne vypocty\n");

    // premenna typu char
    char pismeno1 = 'A';
    printf("Pismeno1 je %c\n", pismeno1);

    // narabanie z pismenami
    char pismeno2 = pismeno1 + 2;
    printf("Pismeno2 je %c\n", pismeno2);

    // premenna typu int
    int pocetZiakov = 22 + 3;
    printf("Pocet ziakov tretej triedy je %i\n", pocetZiakov);
    unsigned int novyPocetZiakov = pocetZiakov;
    printf("Novy pocet ziakov je %d\n", novyPocetZiakov);

    // premenna typu float;
    float priemer = 61 / ((float) pocetZiakov);
    printf("Priemer znamok je %.2f, kde pocet ziakov bol %i\n", priemer, pocetZiakov);

    // premenna typu double
    double vekVesmiru = 14700000000;
    printf("Vek vesmiru je %.0f\n", vekVesmiru);

    // vedecka notacia
    double nabojElektronu = 1.602e-19;
    unsigned int pocetElektronov = 235;
    double velkostNaboja = (double) pocetElektronov * nabojElektronu;
    printf("%d elektronov ma naboj %e Coulomba\n", pocetElektronov, velkostNaboja);

    return 0;
}
