#ifndef SASTOJAK_H
#define SASTOJAK_H


class Sastojak
{
public:
    string naziv;
    int kolicina,energetskavrednost;
private:
    sastojak konstruktor(string ime; int kol; int energ)
    {
        naziv=ime;
        kolicina=kol;
        energetskavrednost=energ;
    }

};

#endif // SASTOJAK_H
