#include "test.h"
#include <cassert>
#include "stack.cpp"

bool testStack() {
    // ������������ �������� � int
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    assert(intStack.pop() == 2);

    // ������������ �������� � double
    Stack<double> doubleStack;
    doubleStack.push(3.14);
    doubleStack.push(2.71);
    assert(doubleStack.pop() == 2.71);

    // ������������ �������� �� ��������
    Stack<string> stringStack;
    stringStack.push("������");
    stringStack.push("���");
    assert(stringStack.pop() == "���");

    return true;
}