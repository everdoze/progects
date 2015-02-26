#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
#include <string>
#include "list.h"

using namespace std;

class menu {
    list* l; // list
    int a; // action
    int type; // search type
    string name, city, subm;
    void execute ();
    bool read();
public:
    void init();
    bool display ();
};

class db {
	// <fields>
    string name;
    string plant;
    string color;
    string grind;
    int price;
    // </fields>
    int cell; // the type switch
    bool read; // the "read" state switch
    char c; // current symbol
    int m,mm; // choice
    int n; //amount of records
    int method = 0; // input method
    int show; // output method
    int type; // SEARCH: TYPE
    string srch; // SEARCH: STRING
    string ifp; // input file path
    string ofp; // output file path
    fstream fin; // input file
    fstream fout; // output file
};

#endif // MENU_H_INCLUDED
