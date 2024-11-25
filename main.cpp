// 
//  main.cpp
//  specialstack6.cpp
//
//  Created by Jovhems Jean-Baptiste on 11/24/24.
//

#include <iostream>
#include "specialstack.h"

int main() {
    SpecialStack one, two, three, four;

    try {
        std::cout << "Stack one" << std::endl;
        one.push(41);
        one.push(66);
        one.push(91);
        one.push(88);
        one.push(33);
        one.popEven();  // Should remove 88
        one.printStack(); // Expected Output: 33 91 66 41
    }
    catch (const std::runtime_error& e) {
        std::cout << "Unable to complete operations: " << e.what() << std::endl << std::endl;
    }

    try {
        std::cout << "Stack two" << std::endl;
        two.push(1);
        two.push(9);
        two.push(6);
        two.push(2);
        two.push(8);
        two.push(6);
        two.push(4);
        two.popOdd(); // Should remove 9
        two.printStack(); // Expected Output: 4 6 2 8 6 1
    }
    catch (const std::runtime_error& e) {
        std::cout << "Unable to complete operations: " << e.what() << std::endl << std::endl;
    }

    try {
        std::cout << "Stack three" << std::endl;
        three.popEven(); // Should throw an error
        three.printStack();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Unable to complete operations: " << e.what() << std::endl << std::endl;
    }

    try {
        std::cout << "Stack four" << std::endl;
        four.pop(); // Should throw an error
        four.printStack();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Unable to complete operations: " << e.what() << std::endl << std::endl;
    }

    // Additional test case to show desired output
    try {
        SpecialStack testStack;
        testStack.push(77);
        testStack.push(12);
        testStack.push(13);
        testStack.push(22);
        testStack.push(42); // Pushed in this order
        testStack.printStack(); // Expected Output: 42 22 13 12 77
        testStack.popOdd(); // Should remove 13
        testStack.printStack(); // Expected Output: 42 22 12 77
    }
    catch (const std::runtime_error& e) {
        std::cout << "Unable to complete operations: " << e.what() << std::endl << std::endl;
    }

    return 0;
}
