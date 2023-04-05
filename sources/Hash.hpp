#pragma once
#include <bits/stdc++.h>

using namespace std;

class Hash
{
    int BUCKET = 5971; // number of buckets
    list<int> *table; // pointer to array with buckets

    public:
        Hash(int V);
        void insertItem(int item);
        void deleteItem(int key);
        int hashMe(int key);
        void display();
};