#include <string>

using namespace std;

struct element
{
    string Lastname;
    string Name;
    string Surname;
    string Address;
    string Telephone;
    element *next;
};

class node
{
public:
     element *head;
     bool add(string lastname, string surname, string name, string address, string telephone);
     bool edit(string lastname, string surname, string name, string address, string telephone, int _count);
     bool reMove(string lastname, string surname, string name, string address, string telephone, int _count);
     element* finD(string lastname, string surname, string name, string address, string telephone, bool &_head);
     bool show();
};
