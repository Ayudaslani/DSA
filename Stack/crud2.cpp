#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int capacity;

    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == capacity - 1;
    }
    void push(int element)
    {
        if (isFull())
        {
            cout << "stack is Overflow ..." << endl;
        }
        else
        {
            arr[++top] = element;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is underflow ....." << endl;
            return -1;
        }
        else
        {
            int popvalue = arr[top--];
            return popvalue;
        }
    }
    void display()
    {

        if (isEmpty())
        {
            cout << "Stack is empty ...." << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is underflow ...." << endl;
            return -1;
        }
        else
        {
            int peekvalue = arr[top];
            return peekvalue;
        }
    }
};
int main()
{
    int size;
    cout << "enter the size :-";
    cin >> size;

    Stack stack(size);
    int ch, value, index, value1;
    while (1)
    {
        cout << "Press 1 for push operation" << endl;
        cout << "press 2 for pop operation" << endl;
        cout << "Press 3 for peep operation" << endl;
        cout << "Press 4 for display" << endl;
        cout << "press 0 exit" << endl;

        cout << "Enter Your choice :- " << endl;
        cin >> ch;

        if (ch == 0)
        {
            cout << "---------------- Thank You ---------------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the value to be push :- ";
            cin >> value;

            stack.push(value);

            cout << "add value successfully .........!" << endl;
            break;

        case 2:

            value1 = stack.pop();
            if (value1 != -1)
            {
                cout << "Delete successfully .." << endl;
            }
            break;
        case 3:
            value1 = stack.peek();
            if (value1 != -1)
            {
                cout << "Top :- " << value1 << endl;
            }
            break;
        case 4:
            stack.display();
        }
    }

    return 0;
}