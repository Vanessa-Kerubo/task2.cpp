#include <iostream>
using namespace std;

class Stack {
private:
    int items[100];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push an element onto the stack
    void push(int value) {
        top++;
        items[top] = value;
    }

    // Pop an element from the stack
    int pop() {
        int value = items[top];
        top--;
        return value;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Create two stacks
    Stack s1;
    Stack s2;

    // Forward stack
    for (int i = 1; i <= n; i++) {
        s1.push(i);
    }

    // Transfer elements from s1 to s2
    while (!s1.isEmpty()) {
        int number = s1.pop();
        s2.push(number);
    }

    // Calculate factorials
    int factorial = 1;

    while (!s2.isEmpty()) {

        int number = s2.pop();

        factorial = factorial * number;

        cout << number << "! = "
             << factorial << endl;
    }

    return 0;
}