#ifndef Jelo_H
#define Jelo_H
#include <iostream>
using namespace std;
#include <vector>

class Jelo
{
private:
    string ime;
    vector<Sastojak> sastojci;
public:
    Jelo()
    {
        ime="nepoznato";
    }
    Jelo(string naziv,Sastojak& s1,Sastojak& s2,Sastojak& s3)
    {
        ime=naziv;
        sastojci.push_back(s1);
        sastojci.push_back(s2);
        sastojci.push_back(s3);
    }
    void ispisiSastojke()
    {
        cout<<"Naziv jela: "<<ime<<endl;
        /*    /// 1. nacin
            for (int i=0; i<sastojci.size(); i++){
                sastojci[i].ispisipodatke();
            }
            /// 2. nacin    */
        for (auto it=sastojci.begin(); it!=sastojci.end(); it++)
        {
            it->ispisipodatke();
        }

    }
    bool dodajSastojak(const Sastojak& s)
    {
        sastojci.push_back(s);
    }
    bool izbaciSastojak(const Sastojak& s)
    {
        for (int i=0; i<sastojci.size(); i++)
        {
            if (sastojci[i].getNaziv()==s.getNaziv())
            {
                sastojci.erase(sastojci.begin()+i);
            }
        }
    }
    /// to do: napisati pretragu po nekim kriterijumima...
    void pretraziSpajz()
    {
        int o;
        cout<<"pretraži po:\nnazivu -> 1\nenergetskoj vrednosti -> 2\n-->";
        cin>>o;
           if(o==1)
        {
            o=0;
            string a;
            cout<<"koji je naziv sastojka?\n--> ";
            cin>>a;
               for (int i=0; i<sastojci.size(); i++)
            {
                if(sastojci[i].getNaziv()==a)
                {
                    cout<<"postoji!"<<endl;
                    sastojci[i].ispisipodatke();
                    break;
                }
            }
        }
        if(o==2)
        {
            o=0;
            cout<<"koja je e. vrednost sastojka?\n--> ";
            cin>>o;
               for (int i=0; i<sastojci.size(); i++)
            {
                if(sastojci[i].getEV()==o)
                {
                    cout<<"postoji!"<<endl;
                    sastojci[i].ispisipodatke();
                    break;
                }
            }
        }
        else
        {
            cout<<"greska!"<<endl;
        }
    }
    virtual void citajpodatke()
    {
        cout<<ime<<endl;
    }
};
#endif // Jelo_H
