#include <iostream>
#include <unordered_set>
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
void printDataloop(node *head){
    node *temp=head;
    do{
        cout<<temp->data<<' ';
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
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
bool isLoop(node *head)
{
    unordered_set<node *> s;
    for (node *c = head; c != NULL; c = c->next)
    {
        if (s.find(c) != s.end())
        {
            return true;
        }
        s.insert(c);
    }
    return false;
}

bool isLoopsing(node *head){
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}


int main()
{
    node *head1=NULL;
    head1=insert_beg(head1,10);
    head1=insert_end(head1,20);
    head1=insert_end(head1,30);
    head1=insert_end(head1,40);
    head1=insert_end(head1,50);
    head1=insert_end(head1,60);

    printData(head1);
    cout <<boolalpha<<isLoop(head1)<<endl<< isLoopsing(head1)<<endl<<endl;

    node *head2 = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head2->next = temp1;
    temp1->next = temp2;
    temp2->next=head2;
    printDataloop(head2);
    cout <<boolalpha<<isLoop(head2)<<endl<< isLoopsing(head2)<<endl;
}