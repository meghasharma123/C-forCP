/*Program to find the key from the sorted array*/
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {20,30,30,40,50};
    int len = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    bool it = binary_search(arr,arr+len,key);
    if(it){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    auto lo = lower_bound(arr,arr+len,key);
    auto up = upper_bound(arr,arr+len,key);
    cout<<(lo-arr)<<" Lower bound"<<endl;
    cout<<(up-arr)<<" Upper bound"<<endl;
    cout<<" range: "<<(up-lo)<<endl;
    return 0;
}
