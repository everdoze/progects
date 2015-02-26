#include "menu.h"

void menu::execute () {
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

bool menu::read() {
    bool loop = true;
    cin >> a;
    system("clear");
    if (a == 6)
        loop = false;
    else {
        cout<<"Enter name\n"; cin>>name;
        cout<<"Enter city\n"; cin>>city;
        cout<<"Enter submission\n"; cin>>subm;
        system("clear");
        execute();
    }
    return loop;
}

void menu::init() {
    l = new leest();
}

bool menu::display () {
    cout << "Enter:\n1 to add a record\
        \n2 to edit a record\
        \n3 to remove a record\
        \n4 to read from file\
        \n5 to write to file\
        \n6 to exit\n";
    return read();
}
