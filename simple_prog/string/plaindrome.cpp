//Check for string that the string is palindrome or not.
#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    s2 = s1;
    int n = s1.length();
    for(int i=0;i<n/2;i++){
        char a = s1[i];
        s1[i] = s1[n-i-1];
        s1[n-i-1]= a;
    }
    cout<<s1<<endl;
    if(s1==s2){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
