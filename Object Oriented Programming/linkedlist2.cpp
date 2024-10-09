#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *Next;
};
struct Node *Head;

struct Node *Create()
{
    int data;
    cout << "Enter Data";
    cin >> data;
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->Next = NULL;
    return newnode;
}
struct Node *InsertNodefirst(struct Node *X)
{
    int data;
    cout << "Enter Data";
    cin >> data;
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->Next = X;
    return newnode;
}
void InsertNodemid(struct Node *X, int p)
{
    int c = 1;
    while (X != NULL)
    {
        if (c == p)
        {
            int data;
            cout << "Enter Data";
            cin >> data;
            struct Node *newnode = new Node;
            newnode->data = data;
            newnode->Next = X->Next;
            X->Next = newnode;
            break;
        }
        c++;
        X = X->Next;
    }
}
void InsertNodelast(struct Node *X)
{
    int data;
    cout << "Enter Data";
    cin >> data;
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->Next = NULL;

    while (X->Next != NULL)
    {
        X = X->Next;
    }
    X->Next = newnode;
}
void Display(struct Node *X)
{
    while (X != NULL)
    {
        cout << X->data << endl;
        X = X->Next;
    }
}

struct Node *Deletefirst(struct Node *X)
{
    X = X->Next;
    return X;
}

void Deletemid(struct Node *X, int p)
{
    int c = 1;
    struct Node *temp;
    while (X != NULL)
    {
        if (c == p)
        {
            temp = X->Next;
            X->Next = temp->Next;
            delete temp;
        }
        c++;
        X = X->Next;
    }
}

void Deletelast(struct Node *X)
{
    while (X->Next->Next != NULL)
    {
        X = X->Next;
    }
    X->Next = NULL;
}

int main()
{
    int choice;
    while (1)
    {

        cout << "Enter your choice";
        cout << "\n 1. To Create List";
        cout << "\n 2. To Add node at first";
        cout << "\n 3. To Add node at Mid";
        cout << "\n 4. To Add node at last";
        cout << "\n 5. Display the List";
        cout << "\n 6. Delete first Node";
        cout << "\n 7. Delete mid Node";
        cout << "\n 8. Delete last Node";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Create the List\n";
            Head = Create();
            break;
        case 2:
            cout << "\nAdd new node At First \n";
            Head = InsertNodefirst(Head);
            break;
        case 3:
            cout << "\nAdd new node in Mid \n";
            cout << "Enter the position";
            int p;
            cin >> p;
            InsertNodemid(Head, p);
            break;
        case 4:
            cout << "\nAdd new node in the last \n";
            InsertNodelast(Head);
            break;
        case 5:
            cout << "\n Display the list\n";
            Display(Head);
            break;
        case 6:
            cout << "\n Delete first Node";
            Head = Deletefirst(Head);
            break;
        case 7:
            cout << "\n Delete mid Node";
            cout << "Enter the position";

            cin >> p;
            Deletemid(Head, p);
            break;
        case 8:
            cout << "\n Delete last Node";
            Deletelast(Head);
            break;
        }
    }
    return 0;
}