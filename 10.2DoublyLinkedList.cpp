#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insertAtHead(node* &head, int val)
{
    node* newNode = new node(val);
    newNode->next = head;
    if(head != NULL)
    {
        head-> prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(node* &head,int val)
{
    if(head == NULL)
    {
        insertAtHead(head,val);
        return;   
    }
    node* newNode = new node(val);
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode -> prev = temp;
}
void display(node* head)
{
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deleteAtHead(node* head)
{
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}
//deleting from a given position
void deletion(node* &head,int pos)
{
    if(pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(temp != NULL && count != pos)
    {
        temp = temp-> next;
        count++;
    }
    temp->prev->next = temp->next;

    if(temp->next != NULL)
    {
         temp->next->prev = temp->prev;
    }
   delete temp;
}

int main()
{

    node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,5);
    display(head);
    return 0;
}