#include<iostream>
using namespace std;
#define N 100
class stack{
    int top;
    int* arr;
    public:
    stack()
    {
        arr = new int[N];
        top = -1;
    
    }
    void push(int n){
        if(top == N-1)
        {
            cout<<"stack overflow \n";
            return;
        }
        top++;
        arr[top] = n;
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"nothing to pop"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if(top == -1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }

};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.Top()<<endl;
    return 0;
}