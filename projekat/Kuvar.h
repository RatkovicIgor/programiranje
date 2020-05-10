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
    Kuvar(string kuhinja,int rejting,string ime)
    {
        kuhinja=kuhinja;
        rejting=rejting;
        ime=ime;
    }
    Kuvar povecajrejting(int rejting)
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
    Kuvar smanjirejting(int rejting)
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
    Kuvar ispisipodatke(string ime, string kuhinja,int rejting,int brojredovnihgostiju)
    {
        cout<<ime<<", "<<kuhinja<<", "<<rejting<<"/10, "<<brojredovnihgostiju<<" redovnih gostiju."<<endl;
    }
};
int Kuvar::brojredovnihgostiju=27;
#endif // KUVAR_H
