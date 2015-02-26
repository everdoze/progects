#include "file_rw.h"

bool file_rw::write(node *_node)
{
    bool result = false;
    element* temp = _node->head;
    f.open("data", fstream::out);
    while (temp)
    {
        if (f.fail()) return false;
        f << temp->Lastname << '&' << temp->Surname << '&' << temp->Name << '&' << temp->Address << '&' << temp->Telephone << '\n';
        temp = temp->next;
        result = true;
    }
    f.close();

    return result;
}

int file_rw::read(node* _node)
{
    string lastname, surname, name, address, telephone;
    char c;
    int m = 1;
    int n;
    f.open("data", fstream::in);
    if (f.fail())
    {
        cout<<"Loading from file failed (((99((((";
        cin.ignore().get();
        return 0;
    }
    while (((c = f.get()) != EOF) && (!f.fail()))
    {
        if (c == '\n')
        {
            m = 1;
            _node->add(lastname, surname, name, address, telephone);
            n++;
            lastname = ""; surname = ""; name = ""; address = ""; telephone = "";
        }
        else if (c == '&')
        {
            m++;
        }
        else switch(m)
        {
            case 1: lastname+=c;  break;
            case 2: surname+=c; break;
            case 3: name+=c; break;
            case 4: address+=c; break;
            case 5: telephone+=c; break;
        }

    }
    f.close();
    return n;
};
