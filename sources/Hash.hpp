#pragma once
#include <string>

using namespace std;

class Hash
{
public:
    void insert(string newData);
    bool find(string lookup);
    void display();

private:
    int hashIt(string data);
};