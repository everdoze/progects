#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
#include <string>
#include "db.h"

using namespace std;

class menu {
    leest* l; // list
    db* file; //file
    int a; // action
    int type; // search type
    string name, city, subm;
    void execute ();
    bool read();
public:
    void init();
    bool display ();
};

#endif // MENU_H_INCLUDED
