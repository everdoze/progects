#include <string>
#include "discs.h"
#include "books.h"
#include <time.h>
#include <iostream>

struct d_list
{
    discs *_discs;
    d_list* next;
};

struct b_list
{
    books *_books;
    b_list *next;
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
    b_list *b_head = new b_list();
    d_list *d_head = new d_list();
    b_head->_books = new books();
    d_head->_discs = new discs();

    b_head->_books->setName(str_rand());
    b_head->_books->setAuthor(str_rand());
    b_head->_books->setPages(rand()%200+100);
    b_head->_books->setPrice(rand()%400+100);
    d_head->_discs->setName(str_rand());
    d_head->_discs->setP_list_size(rand()%20+5);
    d_head->_discs->setPrice(rand()%300+200);

    b_head->_books->view();
    cout << endl;
    d_head->_discs->view();
}
