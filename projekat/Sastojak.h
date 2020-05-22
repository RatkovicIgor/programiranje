#ifndef SASTOJAK_H
#define SASTOJAK_H
#include <iostream>
using namespace std;

class Sastojak
{
private:
    string naziv;
    int energetskavrednost;
public:
    Sastojak(string ime, int energ)
    {
        naziv=ime;
        energetskavrednost=energ;
    }
    int getEV()const{return energetskavrednost;}
    virtual void ispisipodatke()
    {
        cout<<naziv<<", "<<energetskavrednost<<" kilokalorija"<<endl;
    }
    string getNaziv()const{return naziv;}
};
#endif // SASTOJAK_H
