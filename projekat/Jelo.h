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
};
#endif // Jelo_H
