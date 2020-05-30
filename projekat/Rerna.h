#ifndef RERNA_H
#define RERNA_H
#include <iostream>
using namespace std;

class Rerna
{
private:
    int temperatura,vreme,brojposuda;
    bool upaljen;
public:
    Rerna()
    {
        temperatura=21;
        vreme=0;
        brojposuda=0;
    }
    Rerna upali()
    {
        if(upaljen==false)
        {
            upaljen=true;
            cout<<"rerna je upaljena"<<endl;
        }
        else
        {
            cout<<"rerna je vec upaljena"<<endl;
        }
    }
    Rerna promenitemperaturu(int novatemp)
    {
        if(upaljen==true)
        {
            temperatura=novatemp;
        }
        else
            cout<<"rerna nije upaljena"<<endl;
    }
    Rerna ugasi()
    {
        if(upaljen==true)
        {
            upaljen=false;
            temperatura=21;
            vreme=0;
            cout<<"rerna je ugasena"<<endl;
        }
        else
            cout<<"rerna je vec ugasena"<<endl;
    }
    Rerna podesivreme(int t)
    {
        vreme=t;
    }
    Rerna ubaciposudu()
    {
        if(0<brojposuda<4)
        {
                    brojposuda++;
                    cout<<"ubacili ste posudu"<<endl;
        }
        else
            cout<<"rerna je puna"<<endl;
    }
    Rerna izvadiposudu()
    {
        if(0<brojposuda<4)
        {
                    brojposuda--;
                    cout<<"izvadili ste posudu"<<endl;
        }
        else
            cout<<"rerna je prazna"<<endl;
    }
    virtual void ispisistanje()
    {
        cout<<temperatura<<", "<<brojposuda<<" posuda, "<<vreme<<" mintua, "<<upaljen<<endl;
    }
    bool GetSt()
    {
        return upaljen;
    }
    int GetTemp()
    {
        return temperatura;
    }
    int GetBp()
    {
        return brojposuda;
    }
    int GetVre()
    {
        return vreme;
    }

};

#endif // RERNA_H
