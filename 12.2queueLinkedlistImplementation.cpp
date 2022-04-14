#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
class queue{
    
    node* front;
    node* rear;
    public:
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x){
        node* newNode = new node(x);
        if(front == NULL){
            front = newNode;
            rear = newNode; 
        }
        rear->next = newNode;
        rear = newNode;
    }
    void dequeue(){
        if(front == NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek(){
        if(front == NULL){
            cout<< "No element in Queue"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.empty()<<endl;
    return 0;
}