#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[10];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }
    void display();
    void Insert(int index, int x);
    void Delete(int index);
    int Search(int key);
    int sum();
};

void Array::Insert(int index, int x)
{
    if (length == size)
    {
        cout << "Array overflow!!" << endl;
        return;
    }
    if (index >= 0 && index <= length)
    {
        for (int i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}

void Array::Delete(int index)
{
    if (length == 0)
    {
        cout << "Array underflow!!" << endl;
        return;
    }
    if (index >= 0 && index < length)
    {
        int x = A[index];
        cout << "Deleted Element is: " << x << endl;
        for (int i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
    }
}

int Array::Search(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            cout << "Element found at index ";
            return i;
        }
    }
    return -1;
}

int Array::sum()
{
    int s = 0;
    for (int i = 0; i < length; i++)
        s += A[i];
    return s;
}

void Array::display()
{
    cout << "Elements are: ";
    for (int i = 0; i < length; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main()
{
    Array *arr;
    int ch, index, ele, sz;

    cout << "Enter Size of Array: ";
    cin >> sz;
    arr = new Array(sz);

    do
    {
        cout << "Menu\n1. Insert\n2. Delete\n3. Search\n4. Sum\n5. Display\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the Index and element: ";
            cin >> index >> ele;
            arr->Insert(index, ele);
            break;
        case 2:
            cout << "Enter the Index where you want to delete an element: ";
            cin >> index;
            arr->Delete(index);
            break;
        case 3:
            cout << "Enter the key element you want to search: ";
            cin >> ele;
            cout << arr->Search(ele) << endl;
            ;
            break;
        case 4:
            cout << "Sum of all elements is: " << arr->sum() << endl;
            break;
        case 5:
            arr->display();
            break;
        case 6:
            delete arr;
            exit(0);
        default:
            cout << "Invalid choice!!" << endl;
        }
    } while (ch < 7);

    delete arr;

    return 0;
}
