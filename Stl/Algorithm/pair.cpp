//Write a program to print pair entries.
#include <iostream>

using namespace std;

int main()
{
    pair<int,int>p;
    p.first = 10;
    p.second = 50;
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<pair<int,string>,string>t;
    cin>>t.first.first;
    cin>>t.first.second;
    cin>>t.second;
    cout<<t.first.first<<" "<<t.first.second<<" "<<t.second;

    return 0;
}
