#ifndef POSUDA_H
#define POSUDA_H


class Posuda
{
private:
    string kvalitet;
    string naziv,upotreba;
public:
    Posuda konstruktor(string kva,string ime,string upo)
    {
        kvalitet=kva;
        naziv=ime;
        upotreba=upo;
    }
};

#endif // POSUDA_H
