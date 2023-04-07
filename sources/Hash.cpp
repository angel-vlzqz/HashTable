#include <iostream>
#include "Hash.hpp"

using namespace std;

// const prime size and hash value
const int SIZE = 31;
const int HASH = 31;

struct node
{ // creating a struct node for the linked list
    string data;
    node *next = NULL;
};

struct node *bucketArray[SIZE]; // global array that contains 31 nodes

// O(1)
void Hash::insert(string newData)
{
    struct node *newNode = new node;
    newNode->data = newData;                             // set data
    newNode->next = bucketArray[hashIt(newData) % HASH]; // hash to find insert index
    bucketArray[hashIt(newData) % HASH] = newNode;       // insert data
}

// O(1)
bool Hash::find(string lookup)
{
    struct node *temp;             // create temp node
    int x = hashIt(lookup) % HASH; // find index in node array from the hash
    temp = bucketArray[x];         // set temp as a node from node array

    if (bucketArray[x] == NULL) // base case, checks in index if node array is empty
    {
        cout << "Not here " << endl;
        return false;
    }

    if (bucketArray[x]->data == lookup) // base case, checks if first node has our data
    {
        cout << lookup << " was found at index " << x << endl;
        return true;
    }
    else
    {
        while (temp != NULL) // iterate through list to find our data
        {
            if (temp->data == lookup)
            {
                cout << lookup << " was found at index " << x << endl;
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
}

void Hash::display()
{
    struct node *temp;
    for (int i = 0; i < SIZE; i++)
    {
        int x = i % HASH; // hash to find index
        temp = bucketArray[x];
        cout << i << "-> ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int Hash::hashIt(string data)
{
    int sum = 0;

    for (int i = 0; i < data.length(); i++) // sum every ASCII value for every index of the string
    {
        sum += data[i];
    }

    return sum;
}