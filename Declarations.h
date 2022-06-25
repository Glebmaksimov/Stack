
#ifndef STACK_IMPLEMENTATION_DECLARATIONS_H
#define STACK_IMPLEMENTATION_DECLARATIONS_H

#include <iostream>
#include <string>
using namespace std;
#define CAPACITY 5


template<typename T>
class Stack{
private:

    int top = 0;
    T array[CAPACITY];

public:

    void push(T);
    T pop();
    bool empty();
    bool full();
};

#include "Implementations.hpp"
#endif
