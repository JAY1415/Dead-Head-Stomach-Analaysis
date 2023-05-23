#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void tail1(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPosition(node *&head, int position, int d)
{
    if (position == 1) /// insert at start positon
    {
        insertAthead(head, d);
        return;
    }
    node *temp = head;
    int count = 0;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    node *nodetoinset = new node(d);
    nodetoinset->next = temp->next;
    temp->next = nodetoinset;
}
int main()
{
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    node *head = node1;
    node *tail = node1;
    // insert(head, 20);
    // insert(head, 12);
    tail1(tail, 20);
    tail1(tail, 12);
    print(head);

    insertAtPosition(head, 3, 22);
    print(head);
    return 0;
}