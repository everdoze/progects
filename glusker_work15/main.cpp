#include <string>
#include "discs.h"
#include "books.h"
#include <time.h>

struct t_list
{
    discs *_discs = new discs();
    books *_books = new books();
    t_list* next;
};


std::string str_rand()
{
    std::string str;
    str += (char)(rand()%26+65);
        for (int i=1; i<rand()%10+5; i++)
            str += (char)(rand()%26+97);
    return str;
}



int main ()
{
    srand(time(NULL));
    //рандом
    t_list *head = new t_list();
    t_list *el;

    head->_books->setName(str_rand());
    head->_books->setAuthor(str_rand());
    head->_books->setPages(rand()%200+100);
    head->_books->setPrice(rand()%400+100);
    head->_discs->setName(str_rand());
    head->_discs->setP_list_size(rand()%20+5);
    head->_discs->setPrice(rand()%300+200);

    head->_books->view();
    head->_discs->view();
}
