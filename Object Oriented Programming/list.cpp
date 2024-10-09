#include <iostream>
using namespace std;
struct node *head = NULL;
struct node *create()
{
    int data;
    cout << "\nEnter data: ";
    cin >> data;
    struct node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        head = create();
        break;
    case 2:
        insert(head);
        break;
    case 3:
        display(head);
        break;
    }
    return 0;
}