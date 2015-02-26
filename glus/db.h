#ifndef DB_H_INCLUDED
#define DB_H_INCLUDED

#include <fstream>
#include "list.h"

using namespace std;

class db {
    fstream f; // input file
    bool read(leest* l);
    void write(leest* l);
};

#endif // DB_H_INCLUDED
