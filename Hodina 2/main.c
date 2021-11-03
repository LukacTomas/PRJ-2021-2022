#include <stdio.h>

<<<<<<< HEAD
int main(void)
{
   char pismeno = 'B' + 2;
   printf("Toto je moje pismeno: %c \n", pismeno);

   int pocetZiakov = 21;
   printf("Pocet ziakov v 3.B je %i\n", pocetZiakov);
   
   unsigned int pocet = pocetZiakov + 3;
   printf("Ozajstny pocet ziakov v 3.B je %i\n", pocet);

   float priemer = 60 / (float)pocetZiakov;
   printf("Priemer znamok je %.2f a pocet ziakov je %i\n", priemer, pocetZiakov);

   double vekVesmiru = 13700000000;
   printf("Vek vesmiru je %.0lf\n", vekVesmiru);

   double nabojElektronu = 1.602e-19;
   unsigned int pocetElektronov = 365;
   double celkovyNaboj = nabojElektronu * (float)pocetElektronov;
   printf("Ak mam %i elektronov, tak ich naboj je %e Coulomba\n", pocetElektronov, celkovyNaboj);

   short c1 = 32000;
   short c2 = 32000;
   short c3 = c1 + c2;
   printf("c1 = %i, c2 = %i, c3 = %i\n", c1,c2,c3);

=======
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
>>>>>>> aab7f949ce83a7f7b2ad7c31618dd421fb9d8286
}
