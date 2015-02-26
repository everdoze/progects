#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string>

using namespace std;

struct terminus
{
    string name;
    string city;
    string subm;
    terminus *next;
};

class leest
{
    terminus *First;
public:
    leest();
    ~leest();
    bool Add (string name, string city, string subm);

    bool Edt (string name, string city, string subm, bool store);

    bool Rem (string name, string city, string subm);

    terminus* Fnd (string name, string city, string subm);

    string Shw (bool restart);
};

#endif // LIST_H_INCLUDED
