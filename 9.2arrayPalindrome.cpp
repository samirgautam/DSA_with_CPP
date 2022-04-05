#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    bool check = true;
    cin>>arr; // inputs a word
    cout<<arr<<endl;
    for(int i = 0 ; i<n ;i++){
        if(arr[i] != arr[n-i-1])
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        cout<<"word is palindrom \n";
    }
    else{
        cout<<"word is not a palindrome";
    }

}