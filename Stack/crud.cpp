#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int capcity;

    Stack(int size)
    {
        capcity = size;
        top = -1;
        arr = new int[capcity];
    }
    bool isFull()
    {
        return top == capcity - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(int element)
    {
        if (isFull())
        {
            cout << "---------- Stack is overflow ----------" << endl;
        }
        else
        {
            arr[++top] = element;
            cout << "---------- Push Sueccssfully-----------" << endl;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "------  stack is underflow ------------" << endl;
            return -1;
        }
        else
        {
            int popvalue = arr[top--];
            return popvalue;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "-------Stack is empty------------" << endl;
            return -1;
        }
        else
        {
            int peekvalue = arr[top];
            return peekvalue;
        }
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    ~Stack()
    {
        delete[] arr;
    }
};
int main()
{
    int size;
    cout << "Enter the Size :- ";
    cin >> size;

    Stack stack(size);
    int ch, element, value;
    while (1)
    {
        cout << "\nPress 1 For push " << endl;
        cout << "Press 2 For pop " << endl;
        cout << "Press 3 For peek " << endl;
        cout << "Press 4 For display " << endl;
        cout << "Press 0 For exit " << endl;

        cout << "Enter your choice :-";
        cin >> ch;

        if (ch == 0)
        {
            cout << "-------- Thank You ------------" << endl;
            break;
        }
        switch (ch)
        {
        case 1:
            cout << "Enter the Element :-" << endl;
            cin >> element;
            stack.push(element);

            break;
        case 2:

            value = stack.pop();
            if (value != -1)
            {
                cout << "---------- pop successfully -----------" << endl;
            }
            break;

        case 3:
            value = stack.peek();
            if (value != -1)
            {
                cout << "Top Element :- " << value << endl;
                cout << " ---------- peek successfully -----------" << endl;
            }
            break;

        case 4:
            stack.display();
            break;
        default:
            cout << "Invalid Choice !!!" << endl;
        }
    }
    return 0;
}