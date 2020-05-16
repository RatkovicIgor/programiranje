#ifndef Jelo_H
#define Jelo_H
#include <iostream>
using namespace std;

class Jelo
{
private:
    string ime;
    string a[3];
public:
    Jelo()
    {
        ime="nepoznato";
        a[0]="nepoznato";
        a[1]="nepoznato";
        a[2]="nepoznato";
    }
    Jelo(string naziv,string s1,string s2,string s3)
    {
        ime=naziv;
        string b=s1;
        string c=s2;
        string d=s3;
        a[0]=b;
        a[1]=c;
        a[2]=d;
    }
    virtual void citajpodatke()
    {
        cout<<ime<<endl;
    }
};
#endif // Jelo_H
