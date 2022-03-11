/*WAP to sort car in increasing order of distance and in =case distance is same then arrange in Lexographical order */

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

class car{
  public:
    string name;
    int x;
    int y;
    car(){
        
    }
    car(string n,int x,int y){
        name = n;
        this->x = x;
        this->y = y;
    }
    int distance(){
        return x*x+y*y;
    }
};
bool cmp(car a, car b){
    
    if(a.distance() == b.distance()){
        return a.name <b.name;
    }
    return a.distance()<b.distance();
}
int main()
{
    int n;
    cin>>n;
    vector<car>v;
    for(int i=0;i<n;i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto m:v){
        cout<<"Car is : "<<m.name<<" "<<m.x<<" "<<m.y<<endl;
    }
    return 0;
}
