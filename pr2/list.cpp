#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "list.h"

class list
{
    terminus *First;
public:
    list() {
        First = nullptr;
    }
    ~list();
    bool Add (string name, string city, string subm) {
        bool result = true;
        terminus* m = new terminus();
        if (Fnd(name, city, subm) == nullptr)
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

    bool Edt (string name, string city, string subm, bool store) {
        static terminus* tmp;
        result = true;
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

    bool Rem (string name, string city, string subm) {
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

    terminus* Fnd (string name, string city, string subm) {
        material* tmp = First;
        bool found = false;
        if (tmp)            
            if ((tmp->name==srch) && (tmp->city==srch) && (tmp->subm==srch))
                found = true;
            for (; (tmp)&&(!found); found ? 0 : tmp = tmp->next)
                if ((tmp->next->name==srch) && (tmp->next->city==srch) && (tmp->next->subm==srch))
                    found = true;
        if (!found)
            tmp = nullptr;
        return tmp;
    }



};

#endif // LIST_H_INCLUDED
