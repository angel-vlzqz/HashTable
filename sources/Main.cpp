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
    Hash hash;

    // read from file into string array
    while (!myFile.eof())
    {
        myFile >> song[idx];
        idx++;
    }
    myFile.close();

    // insert string array into hash array
    for (int i = 0; i <= idx; i++)
    {
        hash.insert(song[i]);
    }

    // display
    hash.display();

    //find string
    hash.find("veo");
}