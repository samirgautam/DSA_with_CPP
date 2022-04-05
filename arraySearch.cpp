#include<iostream>
using namespace std;
int arraySearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Input N"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Input array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"input key"<<endl;
      cin>>key;
    cout<<arraySearch(arr,n,key)<<endl;
}