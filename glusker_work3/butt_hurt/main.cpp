#include <iostream>
#include "main.h"

using namespace std;

int x;
int y;
int z;

extent "C" float go(int,int,int);

int main()
{
    cout << "Здрастите, числа введите!" << endl;
    cout << "x = "; cin >> x; cout << endl;
    cout << "y = "; cin >> y; cout << endl;
    cout << "z = "; cin >> z; cout << endl;
    int result = go(x,y,z);
    cout << "Результат: " << result;
    return 0;
}
