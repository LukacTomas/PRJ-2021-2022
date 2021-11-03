#include <stdio.h>

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

}
