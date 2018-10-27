// test_stack.cpp - test stack implementations
#include <iostream>

#include "stack.h"

int main()
{
    Stack *as = new ArrayStack();
    Stack *ls = new ListStack();

    // Output:
    // ArrayStack::push(int)
    // ListStack::push(int)
    as->push(0);
    ls->push(1);

    // TODO: Implement tests

    return 0;
}