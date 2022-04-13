#include<iostream>
#define N 20
using namespace std;
class queue{
    int *arr;
    int front;
    int rear;
    public:
    queue(){
        arr = new int[N];
        front = -1;
        rear = -1;
    }
    void enqueue(int x){
    if(rear == N-1){
      cout<<"Queue Overflow"<<endl;
      return;  
    }
    rear++;
    arr[rear] = x;
    if(front == -1)
    {
        front++;
    }
    }
    void dequeue(){
        if(front > rear || front == -1){
            cout<<"Queue Empty"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front> rear){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front == -1 || front>rear)
        {
            return true;
        }
        return false;
    }
};

int main(){
    queue qt; 
    qt.enqueue(1);
    qt.enqueue(2);
    qt.enqueue(3);
    qt.enqueue(4);
    cout<<qt.peek()<<endl;
    qt.dequeue();
    cout<<qt.peek()<<endl;
    qt.dequeue();
    qt.dequeue();
    cout<<qt.peek()<<endl;
    qt.dequeue();
    cout<<qt.empty()<<endl;
    return 0;

}