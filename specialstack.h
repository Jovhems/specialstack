//
//  specialstack.hpp
//  specialstack6.hpp
//
//  Created by Jovhems Jean-Baptiste on 11/24/24.
//

#ifndef SPECIALSTACK_H
#define SPECIALSTACK_H

#include <stack>
#include <iostream>
using namespace std;

class SpecialStack {
private:
    stack<int> dataStack; // STL stack to store data

public:
    // Basic operations
    void push(int value);
    void pop();
    int peek() const;
    bool empty() const;
    void printStack() const;

    // Additional operations
    void popOdd();
    void popEven();
};

#endif
