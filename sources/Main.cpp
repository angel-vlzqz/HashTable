#include <iostream>
#include "Hash.hpp"

using namespace std;

int main()
{
    //array that contains keys
    int test[] = {15, 11, 27, 8, 12};
    int num = sizeof(test) / sizeof(test[0]);

    //insert keys
    Hash hash(5971);

    for (int i = 0; i < num; i++)
    {
        hash.insertItem(test[i]);
    }

    hash.display();
    hash.deleteItem(27);
    hash.display();
}