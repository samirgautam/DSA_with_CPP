#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
    void insertAtEnd(node* &head, int val){
        node* newNode = new node(val);
        
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;   
    }
    
    void display(node* head)
    {
        node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data;
             temp = temp->next;
        }
       cout<<"NULL"<<endl;
    }
    bool search(node* head, int key)
    {
        node* temp = head;
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        cout<<endl;
        return false;
    }

    void deleteAtHead(node* &head)
    {
        node* todelete = head;
        head = head->next;
        delete todelete;
    }
    void deletion(node* head, int val)
    {
        if(head == NULL)
        {
            return;
        }
        if(head-> next == NULL)
        {
            deleteAtHead(head);
        }
        node* temp = head;
        while(temp->next->data != val)
        {
            temp = temp-> next;
            if(temp->next == NULL)
            {
                cout<<"Element to be deleted not found"<<endl;
            }
        }
        node* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }
int main()
{
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    display(head);
    cout<<search(head, 2);
    deletion(head, 3);
    display(head);
    deletion(head,3);
    return 0;
}
