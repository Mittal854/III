#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *Next;
};

struct Node *Head = NULL;
struct Node *Create()
{
    int data;
    cout << "\n Enter data";
    cin >> data;
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->Next = NULL;
    return newnode;
};
void Display(struct Node *X)
{
    while (X != NULL)
    {
        cout << X->data << endl;
        X = X->Next;
    }
}
void Insert(struct Node *X)
{
    int data;
    cout << "\n Enter A Number";
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
int main()
{
    int choice;
    while (1)
    {
        cout << "Enter your Choice\n";
        cout << "\n 1. To Create the List";
        cout << "\n 2. To Insert new node in the List";
        cout << "\n 3. To Display the List";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Head = Create();
            break;
        case 2:
            Insert(Head);
            break;
        case 3:
            Display(Head);
            break;
        }
    }
}