//
//  specialstack.cpp
//  specialstack6.cpp
//
//  Created by Jovhems Jean-Baptiste on 11/24/24.
//

#include "SpecialStack.h"

void SpecialStack::push(int value) {
    dataStack.push(value);
}

void SpecialStack::pop() {
    if (dataStack.empty()) {
        throw runtime_error("Stack is empty");
    }
    dataStack.pop();
}

int SpecialStack::peek() const {
    if (dataStack.empty()) {
        throw runtime_error("Stack is empty");
    }
    return dataStack.top();
}

bool SpecialStack::empty() const {
    return dataStack.empty();
}

void SpecialStack::printStack() const {
    stack<int> temp = dataStack;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void SpecialStack::popOdd() {
    stack<int> temp;
    bool removed = false;

    while (!dataStack.empty()) {
        int top = dataStack.top();
        dataStack.pop();
        if (!removed && top % 2 != 0) {
            removed = true; // Remove the first odd number
        } else {
            temp.push(top);
        }
    }

    while (!temp.empty()) {
        dataStack.push(temp.top());
        temp.pop();
    }

    if (!removed) {
        throw runtime_error("No odd number found");
    }
}

void SpecialStack::popEven() {
    stack<int> temp;
    bool removed = false;

    while (!dataStack.empty()) {
        int top = dataStack.top();
        dataStack.pop();
        if (!removed && top % 2 == 0) {
            removed = true; // Remove the first even number
        } else {
            temp.push(top);
        }
    }

    while (!temp.empty()) {
        dataStack.push(temp.top());
        temp.pop();
    }

    if (!removed) {
        throw runtime_error("No even number found");
    }
}
