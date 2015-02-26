#include <iostream>
#include "array.h"
using namespace std;
int c[10][10];
int p[25];
int h = 1;
void read_Array()
{
    for(int i = 0;i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            c[i][j] = h;
            h++;
        }
    }
};

void ch_arr()
{
    int g = 1;
    int k = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            while (1)
            {
                g++;
                if (c[i][j] % g == 0)

                  if (c[i][j] == g)
                  {
                    p[k] = c[i][j];
                    k++;
                    break;
                }
                else break;

            }
           g = 1;
        }
    }
};

void show()
{
    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++ )
        {
            cout << c[i][j];
        }
    }
}
