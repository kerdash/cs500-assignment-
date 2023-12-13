#include "Stack.h"
#include <iostream>

using namespace std;

    Stack::Stack() { 
        top = -1; 
    } 

    Stack::Stack(const Stack& other) {
        top = other.top;
        for (int i = 0; i <= top; ++i) {
            items[i] = other.items[i];
        }
    }

    void Stack::push(int item){
        if (top >= (STACK_MAX_SIZE - 1)) { 
            cout << "Stack is full"; 
            return; 
        } 
        else { 
            items[++top] = item;
        } 
    }; 

    int Stack::pop(){ 
        if (top < 0) { 
            cout << "Stack is empty"; 
            return 0; 
        } 
        else { 
            int x = items[top--]; 
            return x; 
        } 
    } 

    bool Stack::stackIsEmpty(){ 
        return (top < 0); 
    }

    int Stack::stackTop() {
        if (!stackIsEmpty()) {
            return items[top];
        } else {
            cout << "Stack is empty";
            return -0;
        }
    }

    bool Stack::stackIsFull() {
        return (top == STACK_MAX_SIZE - 1);
    }

    int Stack::stackSize() {
        return top + 1;
    }

    void Stack::sort() { 
        Stack tempStack;

        while (!stackIsEmpty()) {
            int element = pop();

            while (!tempStack.stackIsEmpty() && element < tempStack.stackTop()) {
                push(tempStack.pop());
            }

            tempStack.push(element);
        }

        while (!tempStack.stackIsEmpty()) {
            push(tempStack.pop());
        }
    }
    
    void Stack::print() {
        if (stackIsEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
    
        for (int i = 0; i <= top; ++i) {
            cout << items[i] << " ";
        }
        cout << endl;
    }