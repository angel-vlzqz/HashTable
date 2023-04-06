#include <iostream>
#include <fstream>
#include <vector>
#include "Hash.hpp"

using namespace std;

int main()
{
    //// array that contains keys
    // int test[] = {69, 420, 36, 42, 43};
    // int num = sizeof(test) / sizeof(test[0]);
    //
    //// insert keys
    // Hash hash(7);
    //
    // for (int i = 0; i < num; i++)
    //{
    //    hash.insertItem(test[i]);
    //}

    // testing file input into test vector
    string input = "";
    int m = 0;
    vector<string> stringVector;
    ifstream myFile;
    myFile.open("TuSonrisa.txt");

    Hash hash(7);

    while (myFile >> input)
    {
        stringVector.push_back(input);
        // cout << stringVector[m] << "  ";
        m++;
    }
    myFile.close();

    // int num = sizeof(stringVector) / sizeof(stringVector[0]);
    int num = stringVector.size();
    for (int i = 0; i < num; i++)
    {
        cout << "test";
        hash.insertItem(stringVector[i]);
    }
    hash.display();
    // cout << " " << sizeof(stringVector) << " " << sizeof(stringVector[0]) <<
    //" " << stringVector.size();
}