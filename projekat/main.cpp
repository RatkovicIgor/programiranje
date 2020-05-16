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
int main()
{
    int opcija;
    cout << "Hello world!" << endl;
    Firma firma1("Gorenje","Slovenija",8);
    Jelo Jelo1();
    Kuvar kuvar1("Srpska",8,"Miroslav");
    Obrok Obrok1();
    Posuda posuda1();
    Rerna rerna1();
    Sastojak sastojak1("Govedina",200),sastojak2("Paradajz",150),sastojak3("Crni luk",100);
    Sporet sporet1();
    Sto sto1();

    Pice p1("Sokodnarandze", 0, 1);
    Pice p2("Margarita", 25, 0);
    Pice p3("Limunada", 0, 1);
    ///Pice citajkatalog();
    cout<<"rad sa firmom -> 1\nrad sa kuvarom -> 2\nrad sa jelom -> 3\nrad sa obrokom -> 4\nrad sa picem -> 5\nrad sa posudom -> 6\nrad sa rernom -> 7\nrad sa sastojkom -> 8\nrad sa sporetom -> 9\nrad sa stolom -> 10\npomoc -> 11\nizlaz -> 12\n|\n-->";
    while(1)
    {
        cin>>opcija;
        switch (opcija)
        {
        case 1:
        {
            firma1.ispisikarakteristike();
            break;
        }
        case 2:
        {
            cout<<"     ispis podataka -> 1\n       povecaj rejting -> 2\n        smanji rejting -> 3"<<endl;
            cin>>opcija;
            if(opcija==1)
            {
                kuvar1.ispisipodatke();
            }
            if(opcija==2)
            {
                kuvar1.povecajrejting();
            }
            else
            {
                kuvar1.smanjirejting();
            }
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            p1.ispisikarakteristike();
            p2.ispisikarakteristike();
            p3.ispisikarakteristike();
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        case 8:
        {
            sastojak1.ispisipodatke();
            break;
        }
        case 9:
        {
            break;
        }
        case 10:
        {
            break;
        }
        case 11:
        {
            cout<<"rad sa firmom -> 1\nrad sa kuvarom -> 2\nrad sa jelom -> 3\nrad sa obrokom -> 4\nrad sa picem -> 5\nrad sa posudom -> 6\nrad sa rernom -> 7\nrad sa sastojkom -> 8\nrad sa sporetom -> 9\nrad sa stolom -> 10\npomoc -> 11\nizlaz -> 12\n|\n-->";
            break;
        }
        case 12:
        {
            return 0;
        }
        }
    }
}
/// rad sa fajlovima u Pice.h
