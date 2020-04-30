#ifndef SPORET_H
#define SPORET_H


class Sporet
{
private:
    string model;
    int temperatura;
    bool upaljen;
public:
    sporet konstruktor(string ime)
    {
        model=ime;
        temperatura=21;
        upaljen=false;
    }
    sporet upali()
    {
        if(upaljen==false)
        {
            upaljen=true;
            cout<<"sporet je upaljen"<<endl;
        }
        else
        {
            cout<<"sporet je vec upaljen"<<endl;
        }
    }
    sporet promenitemperaturu(int novatemp)
    {
        if(upaljen==true)
        {
            temperatura=novatemp;
        }
        else
            cout<<"sporet nije upaljen"<<endl;
    }
    sporet ugasi()
    {
        if(upaljen==true)
        {
            upaljen=false;
            temperatura=21;
            cout<<"sporet je ugasen"<<endl;
        }
        else
            cout<<"sporet je vec ugasen"<<endl;
    }
};
/// klasa jelo treva da zavisi od temperature sporeta (u planu)
#endif // SPORET_H
