#ifndef OBROK_H
#define OBROK_H
#include <iostream>
using namespace std;

class Obrok
{
private:
    string ime;
    ///ostatak iz jela i pica
public:
    Obrok(string naziv)
    {
        ime=naziv;
    }
};
/// ukupan kvalitet zavisi od jela i piæa (string) (u planu)
#endif // OBROK_H
