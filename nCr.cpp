#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for(int i=2;i<=n;i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n,r,nCr;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    nCr = fact(n) / (fact(r)*fact(n-r));
    cout<<nCr;
}