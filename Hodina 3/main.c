#include <stdio.h>

/*
*
* Program na ukazku nacitania datovych typov 
* z stdin pomocou scanf 
* Autor: Tomas Lukac
*
*/

<<<<<<< HEAD
void oddel()
{
    printf("\n--------------------------------------------\n");
}

int main(void)
{
    printf("Program na vstup z stdin\n");
    oddel();
    // premenna typu char
    
=======
int main(void)
{
    printf("Program na vstup z stdin\n");

    // premenna typu char
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286
    char pismeno;
    printf("Zadaj pismeno: ");
    scanf("%c", &pismeno);
    printf("Tvoje pismeno je %c\n", pismeno);
<<<<<<< HEAD
    oddel();
=======
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286


    // premenna typu int
    int pocetZiakov;
    printf("Zadaj pocet ziakov:");
    scanf("%i", &pocetZiakov);
    printf("Pocet ziakov je %d\n", pocetZiakov);
<<<<<<< HEAD
    oddel();
=======
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286

    // premenna typu float;
    float priemer;
    printf("Zadaj priemer:");
    scanf("%f", &priemer);
    printf("Priemer znamok je %.2f\n",priemer);
<<<<<<< HEAD
    oddel();
=======
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286

    // premenna typu double
    double vekVesmiru = 14700000000;
    printf("Zadaj vek vesmiru: ");
    scanf("%lf", &vekVesmiru);
    printf("Vek vesmiru je %.0lf\n", vekVesmiru);
<<<<<<< HEAD
    oddel();
=======
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286

    // vedecka notacia
    double nabojElektronu = 1.602e-19;
    unsigned int pocetElektronov;
    printf("Zadaj pocet elektronov: ");
    scanf("%d", &pocetElektronov);
    double velkostNaboja = (double) pocetElektronov * nabojElektronu;
    printf("%d elektronov ma naboj %e Coulomba\n", pocetElektronov, velkostNaboja);
<<<<<<< HEAD
    oddel();

    return 0;
}
=======

    return 0;
}
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286
