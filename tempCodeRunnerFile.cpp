int main(){
    int n;
    int i;
    cout<<"enter any number";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i == 0){
            cout<<"not prime"<<endl;
            break;
        }
        if(i == n){
cout<<"prime"<<endl;
        }
        
    }
    return 0;
}