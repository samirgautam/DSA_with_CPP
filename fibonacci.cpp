#include<iostream>
using namespace std;
void fibonacci(int n){
    int  t1 = 0;
  int t2 = 1;
    for (int i = 0; i < n; i++)
    {
        cout<<t1<<endl;
        int nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
}
int main(){
  int n;
  cout<<"Enter no. of terms"<<endl;
  cin>>n;
  fibonacci(n);
    
}