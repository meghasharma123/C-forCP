/*Bubble Sort using fumction as parameter property.*/
#include <iostream>

using namespace std;
bool comp(int a,int b){
    return a<=b;//returns trueonly when a is less then b and help it to sort in increasing order.
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-i);j++){
            if(!comp(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
