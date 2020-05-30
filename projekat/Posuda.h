#ifndef POSUDA_H
#define POSUDA_H
#include <iostream>
using namespace std;

class Posuda
{
private:
    int kvalitet;///1-10
    string naziv,upotreba;
    bool cisto=false;
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
    Posuda ocisti()
    {
        cisto=true;
    }
    virtual void ispisikarakteristike()
    {
        cout<<naziv<<", "<<upotreba<<", "<<kvalitet<<cisto<<endl;
    }
    bool GetCis()
    {
        return cisto;
    }
    void SetCis(bool a)
    {
        cisto=a;
    }
};

#endif // POSUDA_H
