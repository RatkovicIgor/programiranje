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
virtual void ispisipodatke()
{
    cout<<naziv<<", "<<energetskavrednost<<" kilokalorija"<<endl;
}
};
#endif // SASTOJAK_H
