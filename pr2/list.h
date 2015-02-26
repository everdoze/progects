#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string>

struct terminus
{
    string name;
    string city;
    string subm;
    terminus *next;
};

class list
{
    terminus *First;
public:
    list() {
    }
    ~list();
    void Add (string name, string city, string subm);

    bool Edt (string name, string city, string subm, bool store);

    void Rem (string name, string city, string subm);

    terminus* Fnd (string name, string city, string subm);

    string Shw (bool restart);
};

#endif // LIST_H_INCLUDED
