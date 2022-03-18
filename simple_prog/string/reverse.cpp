//reverse an array.
#include <iostream>

using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int n = s1.length();
    for(int i=0;i<n/2;i++){
        char a = s1[i];
        s1[i] = s1[n-i-1];
        s1[n-i-1]= a;
    }
    cout<<s1;
    return 0;
}
