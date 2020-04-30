#ifndef OBROK_H
#define OBROK_H


class Obrok
{
private:
    string ime;
    ///ostatak iz jela i pica
public:
    Obrok konstruktor(string naziv)
    {
        ime=naziv;
    }
};
/// ukupan kvalitet zavisi od jela i piæa (string) (u planu)
#endif // OBROK_H
