#include "menu.h"

int main()
{
    menu *body = new menu();
    if (body)
    {
    body->cNode();
    while (body->tick());
    delete body;
    }
    return 0;
}
