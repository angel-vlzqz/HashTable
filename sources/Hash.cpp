#include <iostream>
#include "Hash.hpp"

using namespace std;

const int SIZE = 31; // making a constant size for the array
const int HASH = 31; // this is my hash key

struct node
{ // creating a struct node for the linked list
    string data;
    node *next = NULL;
};

struct node *bucketArray[SIZE]; // a global array called bucketArray

// O(1)
void Hash::insert(string newData)
{                                                        // linked list insert method
    struct node *newNode = new node;                     // create a new node
    newNode->data = newData;                             // setting the data
    newNode->next = bucketArray[hashIt(newData) % HASH]; // the hashing
    bucketArray[hashIt(newData) % HASH] = newNode;       // shifting in the array
}

// O(1)
bool Hash::find(string lookup)
{                                  // there is a lot going on with the find  we pass in what we are looking for
    struct node *temp;             // create a temp node
    int x = hashIt(lookup) % HASH; // now we find the key with our hash function
    temp = bucketArray[x];         // set temp as a node
    if (bucketArray[x] == NULL)
    { // if null empty
        cout << "Not here " << endl;
        return false;
    }
    if (bucketArray[x]->data == lookup)
    { // if data at the hash function value is same as lookup we found it!
        cout << lookup << " was found at index " << x << endl;
        return true;
    }
    else
    { // we need  to check if the data may be in that index,  but in the chain so we need to step through the list
        while (temp != NULL)
        {
            if (temp->data == lookup)
            {
                cout << lookup << " was found at index " << x << endl;
                return true;
            }
            temp = temp->next; // moves the while loop to the end of the list
        }
        return false;
    }
}
void Hash::display()
{
    struct node *temp; // this is like ½ of the lookup method
    for (int i = 0; i < SIZE; i++)
    {
        int x = i % HASH; // just use the hash function to find index
        temp = bucketArray[x];
        cout << i << "-> ";
        while (temp != NULL)
        {
            cout << temp->data << " "; // print it out
            temp = temp->next;
        }
        cout << endl;
    }
}

int Hash::hashIt(string data)
{
    int sum = 0;

    for (int i = 0; i < data.length(); i++)
    {
        sum += data[i];
    }

    return sum;
}