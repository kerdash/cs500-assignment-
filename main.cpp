#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    Stack s;

    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);
    s.push(2);
    s.pop();

    cout << "Stack before sorting: ";
    s.print();

    s.sort();
    cout << "Stack after sorting: ";
    s.print();

    return 0;
}
