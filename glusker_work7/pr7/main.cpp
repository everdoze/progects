#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

struct element
{
    int n;
    element* next;
};


int main ()
{
    element* tpp;
    element* tmp;
    element* head;
    element* delptr;
    int read = 0;
    char c;
    cout << "Now we gonna generate list, enter integer values" << endl << "When you want to stop - enter letter" << endl;
    head = new element();
    bool err = true;
    while (err)
    {
        cin >> read;
        if (cin.good())
        {
            head->n = read;
            err = false;
        }
        else
            {
                cout << "It's The FIRST element Mister G," << endl << "You shood type right value!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
    }
    err = true;
    while (err)
    {
        cin >> read;
        if (cin.good())
        {
            tmp = new element();
            tmp->n = read;
            tmp->next = head;
            head = tmp;
        }
        else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Are you shure you want to stop?" << endl << "Y,N?" << endl;
                cin >> c;
                if ((c == 'Y')||(c == 'y'))
                    err = false;
                else cout << "Continuing" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
    }
    int summ = 0;
    for(tmp = head;tmp;tmp = tmp->next)
    {
        if (tmp->n != 0)
        {
            summ += tmp->n;
            tpp = new element();
            tpp->n = tmp->n * tmp->n;
            tpp->next = tmp->next;
            delptr = tpp;
            tmp->next = tpp;
            tmp = tmp->next;
        }
        else
            {
                tpp = tmp;
                delptr->next = tmp->next;
                tmp = delptr;
                delete tpp;
            }
    }
    cout << "Сумма всех элементов списка = " << summ << endl;
    for (tmp = head;tmp;tmp = tmp->next)
    {
        cout << tmp->n << endl;
    }
    tmp = head;
    while(tmp)
    {
        tpp = tmp;
        tmp = tmp->next;
        delete tpp;
    }
}
/*
==9736==
==9736== HEAP SUMMARY:
==9736==     in use at exit: 0 bytes in 0 blocks
==9736==   total heap usage: 9 allocs, 9 frees, 144 bytes allocated
==9736==
==9736== All heap blocks were freed -- no leaks are possible
==9736==
==9736== For counts of detected and suppressed errors, rerun with: -v
==9736== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
