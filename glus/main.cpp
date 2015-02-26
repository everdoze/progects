#include "menu.h"

int main () {
    menu* m = new menu();
    m->init();
    while (m->display());
    delete m;
    return 0;
}
