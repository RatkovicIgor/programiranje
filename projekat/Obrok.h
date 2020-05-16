#ifndef OBROK_H
#define OBROK_H
#include <iostream>
using namespace std;

class Obrok
{
private:
    string ime;
    ///ostatak iz jela i pica
public:
    Obrok()
    {
        ime="nepoznato";
    }
    Obrok(string naziv)
    {
        ime=naziv;
    }
    virtual void citajpodatke()
    {
        cout<<ime<<endl;
    }
};
#endif // OBROK_H
