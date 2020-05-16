#ifndef KUVAR_H
#define KUVAR_H
#include <iostream>
using namespace std;

class Kuvar
{
private:
    string kuhinja;
    int rejting;///   1-10
    string ime;
    static int brojredovnihgostiju;
public:
    Kuvar()
    {
        kuhinja="nepoznato";
        rejting=0;
        ime="nepoznato";
    }
    Kuvar(string kuh,int r,string i)
    {
        kuhinja=kuh;
        rejting=r;
        ime=i;
    }
    Kuvar povecajrejting()
    {
        if(rejting<10)
        {
            rejting++;
        }
        else
        {
            cout<<"rejting je vec 10"<<endl;
        }
    }
    Kuvar smanjirejting()
    {
        if(rejting>0)
        {
            rejting--;
        }
        else
        {
            cout<<"rejting je vec 0"<<endl;
        }
    }
    virtual void ispisipodatke()
    {
        cout<<ime<<", "<<kuhinja<<", "<<rejting<<"/10, "<<brojredovnihgostiju<<" redovnih gostiju."<<endl;
    }
};
int Kuvar::brojredovnihgostiju=27;
#endif // KUVAR_H
