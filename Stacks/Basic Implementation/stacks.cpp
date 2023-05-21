#include<iostream>
#include<stack>

using namespace std;

class Stack{
    public:
    // properties;

    int size;
    int top;
    int* arr;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(44);
    st.push(43);

    cout << "Top element is " << st.peek() << endl;

    st.pop();

    cout << "Top element is " << st.peek() << endl;

    st.pop();

    cout << "Top element is " << st.peek() << endl;

    st.pop();

    cout << "Top element is " << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl; 
    }
    
    /*
    // creation
    stack<int> s;

    s.push(22);
    s.push(3);

    s.pop();

    cout << s.top() << endl;

    if (s.empty()){
        cout << "The stack is empty" << endl;
    }
    else{
        cout << "The stack is not empty" << endl;
    }
    */

    return 0;
}