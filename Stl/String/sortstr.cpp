/* WAP to sort strings on decreasing length and if same length then follow lexographical order. */
#include <iostream>
#include<algorithm>

using namespace std;
bool comp(string a,string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length()>b.length();
}
int main()
{
    int n;
    cin>>n;
    cin.get();
    string s[100];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    sort(s,s+n,comp);
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}
