#include <iostream>
#include <fstream>
#include "Hash.hpp"

using namespace std;

int main()
{
    ifstream myFile;
    myFile.open("TuSonrisa.txt");
    int idx = 0;
    string input;
    string song[500];

    while (!myFile.eof())
    {
        myFile >> song[idx];
        idx++;
    }
    myFile.close();

    Hash hash;

    for (int i = 0; i <= idx; i++)
    {
        hash.insert(song[i]);
    }

    hash.display();
}