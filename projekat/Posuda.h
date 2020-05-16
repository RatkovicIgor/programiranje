#ifndef POSUDA_H
#define POSUDA_H
#include <iostream>
using namespace std;

class Posuda
{
private:
    int kvalitet;///1-10
    string naziv,upotreba;
public:
    Posuda()
    {
        kvalitet=0;
        naziv="nepoznato";
        upotreba="nepoznato";
    }
    Posuda(int kva,string ime,string upo)
    {
        kvalitet=kva;
        naziv=ime;
        upotreba=upo;
    }
    virtual void ispisikarakteristike()
    {
        cout<<naziv<<", "<<upotreba<<", "<<kvalitet<<endl;
    }
};

#endif // POSUDA_H
