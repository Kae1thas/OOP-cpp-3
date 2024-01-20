#include "test.h"
#include <cassert>
#include "stack.cpp"

bool testStack() {
    // Тестирование операций с int
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    assert(intStack.pop() == 2);

    // Тестирование операций с double
    Stack<double> doubleStack;
    doubleStack.push(3.14);
    doubleStack.push(2.71);
    assert(doubleStack.pop() == 2.71);

    // Тестирование операций со строками
    Stack<string> stringStack;
    stringStack.push("Привет");
    stringStack.push("Мир");
    assert(stringStack.pop() == "Мир");

    return true;
}