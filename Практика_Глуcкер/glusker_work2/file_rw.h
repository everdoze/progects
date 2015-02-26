#ifndef FILE_RW_H_INCLUDED
#define FILE_RW_H_INCLUDED
#include <fstream>
#include <iostream>
#include "node.h"

class file_rw
{
    fstream f;
public:
    int read(node *_node);
    bool write(node *_node);
};
#endif // FILE_RW_H_INCLUDED
