#ifndef PICE_H
#define PICE_H


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
    }
};

#endif // PICE_H
