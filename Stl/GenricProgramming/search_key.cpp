/* Program to search a key in a array and also ensure to write the genric program for this.*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
template <typename T>
int search(T arr[], int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    return -2;
}
int main(){
    float a[] = {1.0,2.2,3.8,6.5,7.8};
    int n = sizeof(a)/sizeof(float);
    float key = 7.8;
    cout<<search(a,n,key)+1<<endl;
    return 0;
}
