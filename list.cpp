// list.cpp - linked list implementations

#include <iostream>

#include "list.h"

////////////////////////////////////////////////////////////////////////////////
// TODO: Implement methods 
////////////////////////////////////////////////////////////////////////////////

List::List(int val)
{
    this->head = nullptr;
}

List::List(int* values, int n)
{
    this->head = nullptr;
}

List::~List()
{
    // CAUTION: don't forget to delete all nodes gracefully.
    std::cout << "List::~List()\n";
}

int List::length()
{
    return 0;
}

bool List::add(Node* n, int val)
{
    return false;
}

void List::push_back(int val)
{
    return;
}

bool List::remove(Node* n)
{
    return false;
}

Node* find(int val)
{
    return nullptr;
}