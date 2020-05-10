#ifndef FIRMA_H
#define FIRMA_H
#include <iostream>
using namespace std;

class Firma
{
private:
    string ime,zemljaporekla;
    int kvalitet;///  1-10
public:
    Firma(string naziv, string poreklo, int ok)
    {
        ime=naziv;
        zemljaporekla=poreklo;
        kvalitet=ok;
    }
    Firma ispisikarakteristike(string ime,string zemljaporekla,int kvalitet)
    {
        cout<<ime<<", "<<zemljaporekla<<", "<<kvalitet<<"/10"<<endl;
    }
};
#endif // FIRMA_H
