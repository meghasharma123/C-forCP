/* Program to find the same shoes that is along with generic function and iterators now we want to add comperator for any data type */

#include<iostream>
class Book{
 public:
  String name;
  int price;
  Book(){
  }
  Book(String name,int price){
    this->name = name;
    this->price = price;
  }
};
int main(){
  Book b1("C++",100);
  Book b2("Java",60);
  Book b3("Python",90);
  
  list<Book>l;
  l.push_back(b1);
  l.push_back(b2);
  l.push_back(b3);
  
