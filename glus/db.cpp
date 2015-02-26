#include "db.h"

bool db::read (leest* l) {
    bool result = true;
    // <fields>
    string name;
    string city;
    string subm;
    // </fields>
    int cell; // the type switch
    bool read; // the "read" state switch
    char c; // current symbol
    int n; //amount of records
	f.open("db", fstream::in);
        if (!f.is_open())
            result = false;
        else {
            cell = 0;
            read = false;
            name = ""; city = ""; subm = "";
            while ((c = f.get()) != EOF) {
                if (c=='\n') {
                    cell = 1;
                    l->Add(name, city, subm);
                    name = ""; city = ""; subm = "";
                }
                else if (c!=' ') {
                    if (!read) {
                        cell++;
                        read = true;
                    }
                    switch (cell) {
                        case 1: name+=c; break;
                        case 2: city+=c; break;
                        case 3: subm+=c; break;
                    }
                }
                else read = false;
            }
            //if (cell>1)
                l->Add(name, city, subm);
        }
    f.close();
    return result;
}

void db::write (leest* l) {
    string tmp;
    f.open("db", fstream::out);
    f<<l->Shw(true);
    while (!((tmp = l->Shw(false)).empty()))
        f<<tmp;
    f.close();
}
