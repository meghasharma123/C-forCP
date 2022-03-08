/*Program to search a key using find()*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(int);
    int key;cin>>key;
    auto t = find(arr,arr+len,key);
    int index = t-arr;
    if(index == len){
      cout<<"Element not present";
    }
    else{
      cout<<index;
}
}
