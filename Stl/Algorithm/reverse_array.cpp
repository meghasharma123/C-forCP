//Write a program to reverse an array by using reverse function//
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,arr+n);// we can reverse whatever elements we want just by replacing n to that number.
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}
