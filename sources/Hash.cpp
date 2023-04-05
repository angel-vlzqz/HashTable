#include "Hash.hpp"

#include <iostream>

Hash::Hash(int V)
{
    this->BUCKET = V;
}

void Hash::insertItem(string data)
{

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
