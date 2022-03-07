/* Write a program to search a key through iterators for generic program. */

#include<iostream>
#include<list>
using namespace std; 
template<class FI,class T>
FI search(FI start,FI end,T key){
  while(start != end){
    if(*start == key){
      return start;
    }
    start++;
  }
  return end;
}
int main(){
  list<int>l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(5);
  l.push_back(10);
  auto t = search(l.begin(),l.end(),5);
  if(t== l.end()){
    cout<<"Element not Found"<<endl;
  }
  else{
    cout<<*t<<endl;
  }
}
