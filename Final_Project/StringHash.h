#ifndef STRINGHASH_H_INCLUDED
#define STRINGHASH_H_INCLUDED
#include <string>

struct hashElm{
    std::string title;
    hashElm *next;
    int data;

    hashElm(){
        next = NULL;
    }
    hashElm(std::string in_string, int in_int){
        next = NULL;
        title = in_string;
        data = in_int;
    }
};

class StringHash{
public:
    StringHash(int);
    StringHash();
    ~StringHash();
    void push(std::string, int);
    void pop(std::string);
    void print();
    void print(bool);
    int getStringData(std::string);
private:
    hashElm **hashTable;
    int hashSum(std::string);
    int hashSize;
};


#endif // STRINGHASH_H_INCLUDED
