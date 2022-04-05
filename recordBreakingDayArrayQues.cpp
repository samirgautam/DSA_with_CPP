//Isyana is given the number of visiitor at her local theme park on N consecutive days. The number of visitir n the i'th day is Vi. A day is record breaking if ti satisfies both of the following conditions: the nnumber of visitor on the day is strictly larger than the number of visitors on each of the previous days.
// either it is the last day , or the number of visitors on the day is strictly larger than the number of visitors on the following day.
//Note that the very first day could be a record breaking day! 
// please help her find out number of record breaking days.
//solution ma max funciton lagauda O(n) time complexity ma complete hunxa

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n+1]; // last element lai pani following day sanga compare garnu parne vako le
    int mx = -1;
     a[n] = -1;
     int ans = 0;
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }
    if(n == 1){
        cout<<'1'<<endl;
        return 0;
    }
    for(int i = 0; i< n ; i++){
        if(a[i] >> mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout<<ans<<endl;
}
