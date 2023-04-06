#pragma once
#include <bits/stdc++.h>

using namespace std;

class Hash
{
    int BUCKET;       // number of buckets
    list<string> *table; // pointer to array with buckets

public:
    Hash(int V);
    void insertItem(string item);
    void deleteItem(string key);
    void display();

private:
    int hashMe(string key);
};