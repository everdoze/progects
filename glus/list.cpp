#include "list.h"

leest::leest() {
    First = nullptr;
}

bool leest::Add (string name, string city, string subm) {
    bool result = true;
    terminus* m = new terminus();
    if (Fnd(name, city, subm) != nullptr)
        result = false;
    else
        if (m) {
            m->name=name;
            m->city=city;
            m->subm=subm;
            m->next = First;
            First = m;
        }
    return result;
}

bool leest::Edt (string name, string city, string subm, bool store) {
    static terminus* tmp;
    bool result = true;
    if (store) {
        if ((tmp = Fnd(name, city, subm)) == nullptr)
            result = false;
    }
    else
        if (Fnd(name, city, subm))
            result = false;
        else {
            tmp->name = name;
            tmp->city = city;
            tmp->subm = subm;
        }
    return result;
}

bool leest::Rem (string name, string city, string subm) {
    bool result = true;
    terminus* container;
    terminus* tmp = Fnd(name, city, subm);
    if (tmp == nullptr)
        result = false;
    else {
        container = tmp->next;
        tmp->next = container->next;
        delete container;
    }
    return result;
}

terminus* leest::Fnd (string name, string city, string subm) {
    terminus* tmp = First;
    bool found = false;
    if (tmp)
        if ((tmp->name==name) && (tmp->city==city) && (tmp->subm==subm))
            found = true;
        for (; (tmp)&&(!found); found ? 0 : tmp = tmp->next)
            if ((tmp->next->name==name) &&
                (tmp->next->city==city) && (tmp->next->subm==subm))
                    found = true;
    if (!found)
        tmp = nullptr;
    return tmp;
}

string leest::Shw (bool restart) {
    string result = "";
    static terminus* tmp;
    if (restart)
        tmp = First;
    if (tmp) {
        result = (tmp->name) + ' ' + (tmp->city)
            + ' ' + (tmp->subm) + '\n';
        tmp = tmp->next;
    }
    return result;
}
