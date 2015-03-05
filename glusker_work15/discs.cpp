#include "discs.h"

// Constructors/Destructors
//

discs::discs () {
initAttributes();
}

discs::~discs () { }

//
// Methods
//


// Accessor methods
//


// Other methods
//

void discs::initAttributes () {
}

void discs::view()
{
      std::cout << "Кол-во песен: " <<this->getP_list_size() << std::endl;
      std::cout << "Название: " <<this->getName() << std::endl;
      std::cout << "Цена: " <<this->getPrice() << std::endl;
}
