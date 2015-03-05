#include "books.h"
#include <iostream>

// Constructors/Destructors
//
using namespace std;
books::books () {
initAttributes();
}

books::~books () { }

//
// Methods
//


// Accessor methods
//


// Other methods
//

void books::initAttributes () {
}

void books::view()
{
      cout << "Название: " <<this->getName() << endl;
      cout << "Автор: " <<this->getAuthor() << endl;
      cout << "Кол-во страниц: " <<this->getPages() << endl;
      cout << "Цена: " <<this->getPrice() << endl;
};
