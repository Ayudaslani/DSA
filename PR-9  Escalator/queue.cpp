#include <iostream>
using namespace std;
class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int size;
    int Capacity;

public:
    Queue(int cap)
    {
        Capacity = cap;
        front = -1;
        rear = -1;
        size = 0;
        arr = new int[Capacity];
    }
    bool isFull()
    {
        return rear == Capacity - 1;
    }
    bool isEmpty()
    {
        return front == -1 || front > rear;
    }

    void create(int element)
    {

        if (isFull())
        {
            cout << "------------- Queue is overflow -----------------" << endl;
            return;
        }

        if (front == -1)

            front = 0;
        rear++;
        arr[rear] = element;
        size++;
        cout << "Enqueue successfully ..." << endl;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "-------------------- Queue is underflow -----------------" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
    void Dequeue()
    {
        if (isEmpty())
        {
            cout << "--------------------- Queue is empty -------------------" << endl;
            return;
        }
        cout << arr[front] << "Dequeue is succssfully ....!" << endl;
        front++;
        size--;
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "------------- Queue is empty -------------" << endl;
            return;
        }
        else
        {
            cout << "--------Front Element -------- :- " << arr[front] << endl;
        }
    }
    int getsize()
    {
        return size;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    int Capacity;
    cout << "Enter the capacity :- ";
    cin >> Capacity;

    Queue q(Capacity);

    int ch, element, index;
    while (1)
    {
        cout << "Press 1 For Enqueue" << endl;
        cout << "Press 2 For Display" << endl;
        cout << "Press 3 For Dequeue" << endl;
        cout << "Press 4 For Peek (Fornt)" << endl;
        cout << "Press 5 For size" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << "Enter Your Choice :- ";
        cin >> ch;

        if (ch == 0)
        {
            cout << "-----------Thank You ------------" << endl;
            break;
        }

        switch (ch)
        {
        case 1:

            cout << "Enter the element :- ";
            cin >> element;
            q.create(element);
            break;

        case 2:
            q.display();
            break;

        case 3:
            q.Dequeue();
            break;

        case 4:
            q.peek();
            break;

        case 5:
            cout << "\n\n   Total size is .... :- " << q.getsize() << endl;
            break;
        default:
            cout << "Invalid Choice !!!" << endl;
        }
    }

    return 0;
}
