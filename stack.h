// stack.h - stack interfaces

#include "list.h"

#define MAX_BUF 128

class Stack {
public:
    virtual ~Stack() {}

    virtual bool push(int val) = 0;
    virtual int pop() = 0;
};

class ArrayStack : public Stack {
private:
    int* buf;
    int top;

public:
    ArrayStack() : top(0), buf(new int[MAX_BUF]) {}
    ~ArrayStack(); 

    bool push(int val);
    int pop();
};

class ListStack : public Stack {
private:
    List list;

public:
    ListStack();
    ~ListStack();

    bool push(int val);
    int pop();

};