//Write a program to rotate an array and also introduce vector initalization and use next_permutation property to get next number.
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,arr+2,arr+n);//To rotate array
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    vector<int>v{1,2,3,4,5};//vector introduction
    rotate(v.begin(),v.begin()+2,v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    next_permutation(v.begin(),v.end());//next_permutation property
    for(int x:v){
        cout<<x<<" ";
    }

    return 0;
}
