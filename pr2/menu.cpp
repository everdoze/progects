#include "list.h"
#include "menu.h"

class menu {
    void execute () {
        switch (a) {
        case 1:
            if (l->Add(name, city, subm))
                cout << "Successful addition\n";
            else
                cout << "A record with data you entered already exists!\n";
            break;
        case 2:
            if (l->Edt(name, city, subm, true)) {
                system("clear");
                cout<<"Enter name\n"; cin>>name;
                cout<<"Enter city\n"; cin>>city;
                cout<<"Enter submission\n"; cin>>subm;
                system("clear");
                if (l->Edt(name, city, subm, false))
                    cout << "Successful edit\n";
                else 
                    cout << "A record with data you entered already exists!\n";
            }
            else
                cout << "The record you want to edit does not exist!\n";
            break;
        case 3:
            if (l->Rem(name, city, subm))
                cout << "Successful removal\n";
            else 
                cout << "The record you want to remove does not exist!\n";
            break;
        }
    }
    
    bool read() {
        bool loop = true;
        cin >> a;
        system("clear");
        cout<<"Enter name\n"; cin>>name;
        cout<<"Enter city\n"; cin>>city;
        cout<<"Enter submission\n"; cin>>subm;
        system("clear");
        if (a == 4)
            loop = false;
        execute();
        return loop;
    }
public:
    void init() {
        l = new list();
    }
    bool display () {
        cout << "Enter:\n1 to add a record\
            \n2 to edit a record\
            \n3 to remove a record\
            \n4 to exit\n";
        return read();
    }
};

class db {
public:
	void read () {
		fin.open(ifp, fstream::in);
            if (!fin.is_open())
                cout<<"Error opening input file\n";
            else {
                cell = 0;
                read = false;
                name = ""; color = ""; plant = ""; grind = ""; price = 0;
                while ((c = fin.get()) != EOF) {
                    if (c=='\n') {
                        cell = 1;
                        l->Newm(name, plant, color, grind, price);
                        name = ""; color = ""; plant = ""; grind = ""; price = 0;
                    }
                    else if (c!=' ') {
                        if (!read) {
                            cell++;
                            read = true;
                        }
                        switch (cell) {
                        case 1: name+=c; break;
                        case 2: plant+=c; break;
                        case 3: color+=c; break;
                        case 4: grind+=c; break;
                        case 5: price*=10; price+=(c-48); break;
                        }
                    }
                    else read = false;
                }
                if (cell>1) l->Newm(name, plant, color, grind, price);
            }
	}
};