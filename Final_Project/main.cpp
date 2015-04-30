#include <iostream>
#include "StringSorter.h"
#include "StringHash.h"
#include "StringTree.h"
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    /*
     StringSorter is the base class of the library. It really only has one function which is
     the alphabetical sort method. Simply put a vector of strings and run the method like so.
     */
    vector<string> someStrings;
    someStrings.push_back("b"); someStrings.push_back("c"); someStrings.push_back("a");
    cout<<"original order:"<<endl;
    for(int i=0; i<someStrings.size();i++){
        cout<<someStrings[i]<<" ";
    }
    cout<<endl;
    //sort...
    StringSorter::sortAlphabetically(someStrings, true);
    cout<<"after sort:"<<endl;
    for(int i=0; i<someStrings.size();i++){
        cout<<someStrings[i]<<" ";
    }
    cout<<endl;

    /*
     StringHash is a hash table class. You can use it by simply declaring an object of type StringHash and
     passing an integer value to represent the size of the hash table. Overloaded indexes are resolved
     by chaining, so the hashtable will be less efficient depending on the number of strings that produce the
     same hash sum.
     Example:
     */

    StringHash someHash(10);
    //push method needs an integer value as data storage.
    someHash.push("apple", 4);someHash.push("bananna", 3);someHash.push("clover", 21);
    cout<<"in order traversal:"<<endl;
    someHash.print();
    cout<<"alphabetical order"<<endl;
    someHash.print(true); //pass false for descending order
    //pop method only needs string to remove from hash table.
    someHash.pop("apple");
    someHash.print(false);
    //getStringData get's int data associated with the string provided
    int someInt = someHash.getStringData("bananna");
    cout<<"Int data: "<<someInt<<endl;

    /*
    StringTree is a Red-Black tree data structure class,
    you can declare it like you would declare any object.
    */

    StringTree someTree;
    //push method needs an integer value as data storage.
    someTree.push("apple", 4); someTree.push("bananna", 3); someTree.push("clover", 21);
    //print method need boolean value to determine the order of traversal.
    cout<<"alphabetical order:"<<endl;
    someTree.print(true);
    cout<<"reverse order:"<<endl;
    someTree.print(false);
    //pop method needs string of desired node to delete.
    someTree.pop("apple");
    cout<<"deleted apple:"<<endl;
    someTree.print(true);






    return 0;
}
