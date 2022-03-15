// WAP to find k largest elements in a running stream.

#include<queue>
#include <iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    int k,cs=0,x;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    while(scanf("%d",&x)!=EOF){
    if(cs<k){
        pq.push(x);
        cs++;
    }
    else{
        if(x>pq.top()){
        pq.pop();
        pq.push(x);
      }
    }
   }
   for(int i=0;i<k;i++){
       cout<<pq.top()<<" ";
       pq.pop();
   }
    return 0;
}
