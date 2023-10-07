#include <iostream>
using namespace std;


struct node
{ // this is just a blueprint
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printData(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    /*if (head==NULL){
        return;
    }
    cout<<head->data<<" ";
    printData(head->next);*/
}
node *insert_beg(node *head, int x)
{ // this function will throw an address so pointer will catch it
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
node *insert_end(node *head, int x)
{
    if (head == NULL)
    {
        node *temp = new node(x);
        return temp;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(x);
    return head;
}
node *sorted_insert(node *head, int x)
{
    node *c = head;
    node *temp = new node(x);
    if (head == NULL)
    {
        return new node(x);
    }
    if (x < head->data)
    {

        temp->next = head;
        return temp;
    }
    while (c->next != NULL && c->next->data < x)
    {
        c = c->next;
    }

    temp->next = c->next;
    c->next = temp;
    return head;
}

int main()
{
    node *head=NULL;
    head=insert_beg(head,10);
    head=insert_end(head,20);
    head=insert_end(head,30);
    head=insert_end(head,40);
    head=insert_end(head,50);
    head=insert_end(head,60);

    node* h=sorted_insert(head,45);
    printData(h)
}