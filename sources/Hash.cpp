#include "Hash.hpp"

#include <iostream>

Hash::Hash(int V)
{
    this->BUCKET = V;
}

void Hash::insertItem(int data)
{
    int INDEX = hashMe(data);
    table[INDEX].push_back(data);
}

void Hash::deleteItem(int key)
{
}

int Hash::hashMe(int key)
{
    return (key % BUCKET);
}

void Hash::display()
{
}
