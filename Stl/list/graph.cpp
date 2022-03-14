//WAP to implement graph using linked list.

#include<iostream>
#include<list>
using namespace std;
int main(){
    int n;
    cin>>n;//no of vertices
    int e;
    cin>>e;//number of edges
    list<pair<int,int>>*l;
    l = new list<pair<int,int> >[n];
    for(int i=0;i<n;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    for(int i=0;i<n;i++){
        for(auto x:l[i]){
            cout<<"("<<x.first<<" "<<x.second<<")";
        }
        cout<<endl;
    }
    
    return 0;
}
