#include <stdio.h>

void oddel()
{
    printf("\n--------------------------------------\n");
}

void uvod()
{
    printf("\nProgram pre overenie podmienok, Boolovej algebry a vetvenia pomocou if\n");
    oddel();
}

int main(void)
{

    uvod();
    // Uvod od podmienok
    int cislo1 = 5;
    int cislo2 = 10;
    int porovnaj1 = cislo1 > cislo2;
    int porovnaj2 = cislo2 > cislo1;
    
    printf("Pre porovnanie %i > %i je vysledok %i\n", cislo1, cislo2, porovnaj1);
    printf("Pre porovnanie %i > %i je vysledok %i\n", cislo2, cislo1, porovnaj2);
    
    oddel();


    int pravda1 = 5 >= 1;
    int pravda2 = 'C' > 'A';
    int nepravda1 = 'A' > 'B';
    int nepravda2 = 5*4 < 3*2;


    
    // Logicke AND
    int LogickeAndNepravda = pravda1 && nepravda1;
    int LogickeAndPravda = pravda1 && pravda2;
    printf("Logicke AND: %i AND %i je %i\n", pravda1, nepravda1, LogickeAndNepravda);
    printf("Logicke AND: %i AND %i je %i\n", pravda1, pravda2, LogickeAndPravda);
    oddel();
    
    // Logicke OR
    int LogickeOrNepravda = nepravda1 || nepravda2;
    int LogickeOrPravda = nepravda1 || pravda2;
    printf("Logicke OR: %i OR %i je %i\n", nepravda1, nepravda2, LogickeOrNepravda);
    printf("Logicke OR: %i OR %i je %i\n", nepravda1, pravda2, LogickeOrPravda);
    oddel();

    if(pravda1)
    {
        printf("Ja som v pravdivom vyraze\n");
    }
    if(nepravda1)
    {
        printf("Ja som v nepravdivom vyraze\n");
    }

     if(pravda1)
    {
        printf("Ja som v pravdivom vyraze if-else\n");
    } 
    else
    {
        printf("Ja som v else -  vyraze if-else\n");

    }
    if(nepravda1)
    {
        printf("Ja som v nepravdivom vyraze\n");
    }
     else
    {
        printf("Ja som v else -  vyraze if-else\n");

    }


    oddel();

    
    

};