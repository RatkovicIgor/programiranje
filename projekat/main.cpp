#include <iostream>
///Sporet, Firma, Rerna, Sto, Posuda, Sastojak, Jelo, Kuvar, Obrok, Pice
using namespace std;
class sporet
{
private:
string model;
int temperatura;
public:

};
class firma
{
private:
string ime,zemljaporekla;
int kvalitet;///  1-10
public:

};
class rerna
{
private:
int temperatura,vreme,brojposuda;
public:

};
class sto
{
private:
bool postavljen,cist;
string materijal;
int brojosoba;
public:

};
class posuda
{
private:
firma kvalitet;
string naziv,upotreba;
public:

};
class sastojak
{
private:
string naziv;
int kolicina,energetskavrednost;
public:

};
class jelo
{
private:
string ime;
sastojak a[];
public:

};
class kuvar
{
private:
string poreklo,kuhinja;
int rejting;///   1-10
public:

};
class pice
{
private:
string ime;
double procenatalkohola;
bool domace;
public:

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
