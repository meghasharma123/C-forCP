#include <iostream>
using namespace std;
int fib(int x){
    if(x==0||x==1){
        return x;
    }
    else{
        return (fib(x-1)+fib(x-2));
    }
}
int main()
{
    int x,fi,i=0;
    cin>>x;
    while(i<x){
      fi = fib(i);
      cout<<fi<<" ";
      i++;
    }
    return 0;
}
