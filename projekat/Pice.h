#ifndef PICE_H
#define PICE_H
#include <iostream>
using namespace std;

class Pice
{
private:
    string ime;
    double procenatalkohola;
    bool domace;
public:
    Pice konstruktor(string naziv,double vol,bool d)
    {
        ime=naziv;
        procenatalkohola=vol;
        domace=d;
        unesipice(ime,procenatalkohola,domace);
    }
    Pice unesipice(string naziv,double vol,bool d)
    {
        string st;
        if (d==true)
        {
            st='domaæe';
        }
        else
        {
            st='veštaèko';
        }
        ofstream Katalog("Pica.txt");
        Katalog<<naziv", "<<vol<<" %, "<<st<<"\n";
        Katalog.close();
    }
    Pice citajkatalog()
    {
        string ime;
        double vol;
        string d;
        ifstream Katalog("Pica.txt");
        while(Katalog >> ime >> vol >> d )
        {
            cout<<naziv", "<<vol<<" %, "<<st<<endl;
    }
};

#endif // PICE_H
