#define STACK_H

#define STACK_MAX_SIZE 10

class Stack {
private:
    int top;
    int items[STACK_MAX_SIZE];

public:
    Stack();
    Stack(const Stack& other);

    void push(int item);
    int pop();
    bool stackIsEmpty();
    int stackTop();
    bool stackIsFull();
    int stackSize();
    void sort();
    void print();
};
