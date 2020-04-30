#ifndef JELO_H
#define JELO_H


class Jelo: public Sastojak
{
private:
    string ime;
    string a[];
public:
    jelo konstroktor(string naziv,string s1,string s2,string s3)
    {
        ime=naziv;
        a= {s1,s2,s3}
    }
};
/// od sastojaka treba da zavisi kavlitet jela (bool) (u planu)
#endif // JELO_H
