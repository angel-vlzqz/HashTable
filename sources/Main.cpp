#include <iostream>
#include <fstream>
#include <string>
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
        cout << song[idx] << " ";
        idx++;
    }
    myFile.close();

    insert(10); // just adding some data
    insert(10);
    insert(125);
    insert(0);
    insert(725);
    insert(85);
    insert(11);
    insert(1243);
    display();         // displaying the data
    cout << find(125); // looking for 125
}