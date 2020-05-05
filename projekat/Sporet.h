#ifndef Sporet_H
#define Sporet_H
#include <iostream>
using namespace std;

class Sporet
{
private:
    string model;
    int temperatura;
    bool upaljen;
public:
    Sporet konstruktor(string ime)
    {
        model=ime;
        temperatura=21;
        upaljen=false;
    }
    Sporet upali()
    {
        if(upaljen==false)
        {
            upaljen=true;
            cout<<"Sporet je upaljen"<<endl;
        }
        else
        {
            cout<<"Sporet je vec upaljen"<<endl;
        }
    }
    Sporet promenitemperaturu(int novatemp)
    {
        if(upaljen==true)
        {
            temperatura=novatemp;
        }
        else
            cout<<"Sporet nije upaljen"<<endl;
    }
    Sporet ugasi()
    {
        if(upaljen==true)
        {
            upaljen=false;
            temperatura=21;
            cout<<"Sporet je ugasen"<<endl;
        }
        else
            cout<<"Sporet je vec ugasen"<<endl;
    }
};
/// klasa jelo treva da zavisi od temperature Sporeta (u planu)
#endif // Sporet_H
