//Check for string that they are rotation of each other or not.
#include <iostream>

using namespace std;
bool isSame(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    else{
        s1 = s1+s1;
        return (s1.find(s2)!=string::npos);
    }
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    bool f = isSame(s1,s2);
    if(f == false){
        cout<<"Strings are not realtable";
    }
    else{
        cout<<"They are relatable";
    }
    return 0;
}
