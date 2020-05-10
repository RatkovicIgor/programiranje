#ifndef PICE_H
#define PICE_H
#include <iostream>
#include <fstream>
using namespace std;

class Pice
{
private:
    string ime;
    double procenatalkohola;
    bool domace;
public:
    Pice(string naziv,double vol,bool d)
    {
        ime=naziv;
        procenatalkohola=vol;
        domace=d;
        unesipice(ime,procenatalkohola,domace);
    }
    Pice unesipice(string naziv,double vol,bool d)
    {
        ofstream Katalog;
        Katalog.open("Pica.txt");
        Katalog << naziv << " "<<vol<<"  "<<d<<"\n";
        Katalog.close();
    }
    Pice citajkatalog()
    {
        string ime;
        double vol;
        bool d;
        ifstream Katalog("Pica.txt");
        while(Katalog >> ime >> vol >> d )
        {
            cout<<ime<<", "<<vol<<" %, "<<d<<endl;
        }
    }
};

#endif // PICE_H
