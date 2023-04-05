#include <iostream>
#include <fstream>
#include <vector>
#include "Hash.hpp"

using namespace std;

int main()
{
    // array that contains keys
    int test[] = {69, 420, 36, 42, 43};
    int num = sizeof(test) / sizeof(test[0]);

    // insert keys
    Hash hash(7);

    for (int i = 0; i < num; i++)
    {
        hash.insertItem(test[i]);
    }

    hash.display();
    // hash.deleteItem(27);
    // hash.display();

    // testing file input into test vector
    string input = "";
    int m = 0;
    vector<string> intVector;
    ifstream myFile;
    myFile.open("TuSonrisa.txt");

    while (!myFile.eof())
    {
        myFile >> input;
        intVector.push_back(input);
        cout << intVector[m] << "  ";
        m++;
    }
    myFile.close();
}