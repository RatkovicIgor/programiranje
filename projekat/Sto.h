#ifndef STO_H
#define STO_H
#include <iostream>
using namespace std;

class Sto
{
private:
    bool postavljen,cist;
    string materijal;
    int brojosoba;
public:
    Sto()
    {
        postavljen=false;
        cist=true;
        materijal="nepoznato";
        brojosoba=0;
    }
    Sto(string a,int b)
    {
        postavljen=false;
        cist=true;
        materijal=a;
        brojosoba=b;
    }
    Sto postavi()
    {
        if(postavljen==false && cist==true)
        {
            postavljen=true;
            cout<<"sto je postavljen"<<endl;
        }
        else
        {
            if(cist==false)
            {
                cout<<"sto nije cist"<<endl;
            }
            else
            {
                cout<<"sto je vec postavljen"<<endl;
            }
        }
    }
    Sto ocisti()
    {
        if(cist==false)
        {
            cist=true;
            cout<<"sto je ociscen"<<endl;
        }
        else
        {
            cout<<"sto je cist"<<endl;
        }
    }
    virtual void ispisipodatke()
    {
        cout<<postavljen<<", "<<cist<<", "<<materijal<<", "<<brojosoba<<" mesta"<<endl;
    }
};
#endif // STO_H
