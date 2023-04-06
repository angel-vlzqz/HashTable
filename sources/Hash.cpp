#include "Hash.hpp"
#include <iostream>

Hash::Hash(int V)
{
    this->BUCKET = V;
    table = new list<string>[BUCKET];
}

void Hash::insertItem(string data)
{
    // get hash index and insert
    int INDEX = hashMe(data);
    table[INDEX].push_back(data);
}

void Hash::deleteItem(string key) // WIP
{
    // find hash index
    int INDEX = hashMe(key);

    // find key in index
    list<string>::iterator i;
    for (i = table[INDEX].begin(); i != table[INDEX].end(); i++)
    {
        if (*i == key)
        {
            break;
        }

        // if key is found, remove it
        if (i != table[INDEX].end())
        {
            table[INDEX].erase(i);
        }
    }
}

int Hash::hashMe(string key)
{
    int sum = 0;
    for (int i = 0; i < key.length(); i++)
    {
        sum += key[i];
    }
    return (sum % BUCKET);
}

void Hash::display()
{
    for (int i = 0; i < BUCKET; i++)
    {
        cout << i;
        for (auto x : table[i])
        {
            cout << " --> " << x;
            cout << endl;
        }
    }
}