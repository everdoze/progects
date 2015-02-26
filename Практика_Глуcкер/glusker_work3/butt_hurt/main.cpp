#include <iostream>
#include "main.h"

using namespace std;

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
