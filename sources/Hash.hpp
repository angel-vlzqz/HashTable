#pragma once
#include <bits/stdc++.h>

using namespace std;

class Hash
{
    int BUCKET;       // number of buckets
    list<int> *table; // pointer to array with buckets

public:
    Hash(int V);
    void insertItem(int item);
    void deleteItem(int key);
    void display();

private:
    int hashMe(int key);
};