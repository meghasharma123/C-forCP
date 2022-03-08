/* Program to find the same shoes that is along with generic function and iterators now we want to add comperator for any data type */

#include<iostream>
#include<list>
using namespace std;
template<class FI,class T,class compare>
FI search(FI start,FI end,T key,compare cmp)
{
    while(start!=end){
      if(cmp(*start,key)){
         return start;
       }
       start++;
      }
    return end;
}
           
class Fruit{
 public:
  string name;
  int price;
  Fruit(string name,int price){
    this->name = name;
    this->price = price;
  }
};
class FruitCmp{
  public:
    bool operator()(Fruit A,Fruit B){
      if(A.name == B.name){
         return true;
      }
     return false;
    }
};
int main(){
  Fruit f1("Apple",100);
  Fruit f2("Mango",60);
  Fruit f3("Orange",90);
  
  list<Fruit>l;
  l.push_back(f1);
  l.push_back(f2);
  l.push_back(f3);
  Fruit fruitToFind("Apple",85);
  FruitCmp cmp;
  auto t = search(l.begin(),l.end(),fruitToFind,cmp);
   if(t != l.end()){
    cout<<"Fruit matched";
   }
 else{
   cout<<"Fruit not matched";
   }
}
