#ifndef POSUDA_H
#define POSUDA_H
#include <iostream>
using namespace std;

class Posuda
{
private:
    string kvalitet;
    string naziv,upotreba;
public:
    Posuda(string kva,string ime,string upo)
    {
        kvalitet=kva;
        naziv=ime;
        upotreba=upo;
    }
};

#endif // POSUDA_H
