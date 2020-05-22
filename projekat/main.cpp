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
    Jelo Jelo1;
    Firma firma1;
    Kuvar kuvar1("Srpska",6,"Miroslav");
    Obrok Obrok1;
    Rerna rerna1;
    Sastojak sastojak1("Govedina",200),sastojak2("Paradajz",150),sastojak3("Crni luk",100), sastojak4("Beli luk",100);
    Jelo gulas("Gulas", sastojak1, sastojak2, sastojak3);
    Sporet sporet1;
    Sto sto1("mahagonija",6);
    Pice p1("Sokodnarandze", 0, 1);
    Pice p2("Margarita", 25, 0);
    Pice p3("Limunada", 0, 1);
    cout<<"rad sa firmom -> 1\nrad sa kuvarom -> 2\nrad sa jelom -> 3\nrad sa obrokom -> 4\nrad sa picem -> 5\nrad sa posudom -> 6\nrad sa rernom -> 7\ndodatne opcije -> 8\nrad sa sporetom -> 9\nrad sa stolom -> 10\npomoc -> 11\nizlaz -> 12\n-->";
    while(1)
    {
        cin>>opcija;
        switch (opcija)
        {
        case 1:
        {
            cout<<"dodaj firmu -> 1\npredlozi firmu -> 2\nvidi podatke -> 3\n--> ";
            int o;
            cin>>o;
            switch(o)
            {
            case 1:
            {
                string a,b;
                int c;
                cout<<"unesi naziv, poreklo, i procenu kvaliteta (1-10) datim redom:"<<endl;
                cin>>a,b,c;
                Firma firma1(a,b,c);
                break;
            }
            case 2:
            {
                Firma firma1;
                break;
            }
            case 3:
            {
                firma1.ispisikarakteristike();
                break;
            }
            }
            break;
        }
        case 2:
        {
            int o;
            cout<<"ispis podataka -> 1\npovecaj rejting -> 2\nsmanji rejting -> 3\n-->";
            cin>>o;
            if(o==1)
            {
                kuvar1.ispisipodatke();
            }
            if(o==2)
            {
                kuvar1.povecajrejting();
            }
            if(o==3)
            {
                kuvar1.smanjirejting();
            }
            else
            {
                cout<<"greska!"<<endl;
            }
            break;
        }
        case 3:
        {
            int o;
            cout<<"ispisi podatke -> 1\nispisi listu sastojaka -> 2\ndodaj sastojak -> 3\nizbaci sastojak -> 4\npronadji sastojak -> 5\n--> ";
            cin>>o;
            switch(o)
            {
            case 1:
            {
                gulas.citajpodatke();
                break;
            }
            case 2:
            {
                gulas.ispisiSastojke();
                break;
            }
            case 3:
            {
                string a;
                cout<<"koji sastojak bbi ste dodali (npr. sastojak1,sastojak2...) -->";
                cin>>a;
                gulas.dodajSastojak(a);
                break;
            }
            case 4:
            {
                string a;
                cout<<"koji sastojak bbi ste izbacili (npr. sastojak1,sastojak2...) -->";
                cin>>a;
                gulas.izbaciSastojak(a);
                break;
            }
            case 5:
            {
                gulas.pretraziSpajz();
                break;
            }
            }
            break;
        }
        case 4:///(!)
        {
            cout<<"(!)"<<endl;
            break;
        }
        case 5:
        {
            int a;
            cout<<"ispisi karakteristike -> 1\ndodaj pice -> 2\nispisi katalog -> 3\n--> ";
            cin>>a;
            switch(a)
            {
            case 1:
            {
                p1.ispisikarakteristike();
                p2.ispisikarakteristike();
                p3.ispisikarakteristike();
                break;
            }
            case 2;
            {
                cout<<"unesi ime, procenat alkohola i poreklo (domace: 1/0):";
                string e;
                int f,g;
                cin>>e,f,g;
                Pice p4(e,f,g);
                break;
            }
            case 3:///(!)
            {
                Pice citajkatalog();
                break;
            }
            }
            break;
        }
        case 6:
        {
            cout<<"dodaj posudu -> 1\nispisi karakteristike -> 2\nocisti -> 3\n--> ";
            int r;
            cin>>r;
            if(r==1)
            {
                Posuda posuda1(9,"Tepsija","Pecenje");
            }
            if(r==2)
            {
                posuda1.ispisikarakteristike();
            }
            if(r==3)
            {
                posuda1.ocisti();
            }
            else
            {
                cout<<"greska!"<<endl;
            }
            break;
        }
        case 7:
        {
            int q;
            cout<<"upali rernu -> 1\nugasi rernu -> 2\nubaci posudu -> 3\nizvadi posudu -> 4\npodesi temperaturu -> 5\npodesi tajmer -> 6\nispisi podatke -> 7\n--> ";
            cin>>q;
            switch(q)
            {
            case 1:
            {
                rerna1.upali();
                break;
            }
            case 2:
            {
                rerna1.ugasi();
                break;
            }
            case 3:
            {
                rerna1.ubaciposudu();
                break;
            }
            case 4:
            {
                rerna1.izvadiposudu();
                break;
            }
            case 5:
            {
                cout<<"unesi novu temperaturu --> ";
                int e;
                cin>>e;
                rerna1.promenitemperaturu(e);
                break;
            }
            case 6:
            {
                cout<<"unesi novo vreme --> ";
                int t;
                cin>>t;
                rerna1.podesivreme(t);
                break;
            }
            case 7:
            {
                rerna1.ispisistanje();
                break;
            }
            }
            break;
        }
        case 8:
        {
            cout<<"da li ste sigurni da zelite da otvorite restoran? (1/0)(ovo utice na rejting kuvara)\n--> ";
            int d;
            cin>>d;
            if(d==0)
            {
                break;
            }
            if(d==1)
            {
                if(rerna1.upaljen==true && sporet1.upaljen==true && rerna1.temperatura>=180 && rerna1.brojposuda>=1 && rerna1.vreme>=30 && sporet1.temperatura>=100 && sto1.cist==true && sto1.postavljen==true && posuda1.cisto==true)
                {
                    cout<<"rejting vam se povecao! :)"<<endl;
                    kuvar1.povecajrejting();
                    sto1.cist=false;
                    sto1.postavljen=false;
                    posuda1.cisto=false;
                    rerna1.ugasi();
                    sporet1.ugasi();
                }
                else
                {
                    cout<<"rejting vam se smanjio! :("<<endl;
                    kuvar1.smanjirejting();
                    sto1.cist=false;
                    sto1.postavljen=false;
                    posuda1.cisto=false;
                    rerna1.ugasi();
                    sporet1.ugasi();
                }
            }
            else
            {
                cout<<"greska!"<<endl;
            }
            break;
        }
        case 9:
        {
            int q;
            cout<<"upali sporet -> 1\nugasi sporet -> 2\npodesi temperaturu -> 3\nispisi podatke -> 4\n--> ";
            cin>>q;
            switch(q)
            {
            case 1:
            {
                sporet1.upali();
                break;
            }
            case 2:
            {
                sporet1.ugasi();
                break;
            }
            case 3:
            {
                cout<<"unesi novu temperaturu --> ";
                int e;
                cin>>e;
                sporet1.promenitemperaturu(e);
                break;
            }
            case 4:
            {
                sporet1.ispisistanje();
                break;
            }
            }
            break;
        }
        case 10:
        {
            int s;
            cout<<"ocisti sto -> 1\npostavi sto -> 2\ispisi podatke -> 3\n--> ";
            cin>>s;
            if(s==1)
            {
                sto1.ocisti();
            }
            if(s==2)
            {
                sto1.postavi();
            }
            if(s==3)
            {
                sto1.ispisipodatke();
            }
            else
            {
                cout<<"greska!"<<endl;
            }
            break;
        }
        case 11:
        {
            cout<<"rad sa firmom -> 1\nrad sa kuvarom -> 2\nrad sa jelom -> 3\nrad sa obrokom -> 4\nrad sa picem -> 5\nrad sa posudom -> 6\nrad sa rernom -> 7\ndodatne opcije -> 8\nrad sa sporetom -> 9\nrad sa stolom -> 10\npomoc -> 11\nizlaz -> 12\n-->";
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
