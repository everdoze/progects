#include <iostream>
#include <string>
#include "file_rw.h"

using namespace std;

class menu
{
    int oneel = 0;
    file_rw* data_info;
    node* data;
    int a;
    string tmp;
    string lastname, surname, name, telephone, address;
public:
    bool showmenu();
    void execute();
    bool read();
    bool tick();
    void cNode();
};
