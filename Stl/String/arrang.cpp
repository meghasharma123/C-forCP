/* WAP which accept n strings and each having same no of columns and also it takes key value to which all rows must be sorted in either reverse order or not which is given by
true / false and ordered may be in numeric or lexographic order */
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string ext(string str,int key){
    char* s = strtok((char*)str.c_str()," ");
    while(key>1){
        s = strtok(NULL," ");
    }
    return string(s);
}
int converToInt(string s){
    int ans=0;
    int p=1;
    for(int i=s.length();i>=0;i--){
        ans+=((s[i]-'0')*p);
        p = p*10;
    }
    return ans;
}
bool numcmp(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;
    return converToInt(key1)<converToInt(key2);
}
bool lexcmp(pair<string,string>s1,pair<string,string>s2){
    string k1,k2;
    k1 = s1.second;
    k2 = s2.second;
    return k1<k2;
}
int main()
{
    int n;
    cin>>n;
    cin.get();
    string a[100];
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;
    pair<string,string>strpair[100];
    for(int i=0;i<n;i++){
        strpair[i].first = a[i];
        strpair[i].second = ext(a[i],key);
    }
    if(ordering == "numeric"){
        sort(strpair,strpair+n,numcmp);
    }
    else{
        sort(strpair,strpair+n,lexcmp);
    }
    if(reversal=="True"){
        for(int i=0;i<n/2;i++){
            swap(strpair[i],strpair[n-i-1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<strpair[i].first<<endl;
    }

    return 0;
}
