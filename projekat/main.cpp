#include <iostream>
using namespace std;
#include "Sporet.h"
#include "Firma.h"
#include "Rerna.h"
#include "Sto.h"
#include "Posuda.h"
#include "Sastojak.h"
#include "Jelo.h"
#include "Kuvar.h"
#include "Obrok.h"
#include "Pice.h"
/// funkcionalnosti su detaljnije opisane u .h fajlovima
///Sporet, Firma, Rerna, Sto, Posuda, Sastojak, Jelo, Kuvar, Obrok, Pice


int main()
{
    int opcija;
    cout << "Hello world!" << endl;
    Firma firma1("Gorenje","Slovenija",8);
    //Jelo jelo1(Gulas);
    Kuvar kuvar1("Srpska",8,"Miroslav");
    //Obrok obrok1;
    //Posuda posuda1;
    //Rerna rerna1;
    Sastojak sastojak1("Govedina",200),sastojak2("Paradajz",150),sastojak3("Crni luk",100);
    //Sporet sporet1;
    //Sto sto1;

    Pice p1("Sokodnarandze", 0, 1);
    Pice p2("Margarita", 25, 0);
    Pice p3("Limunada", 0, 1);
    Pice citajkatalog();

    cin>>opcija;
    switch (opcija)
    {

    }
    return 0;
}
/// rad sa fajlovima u Pice.h
