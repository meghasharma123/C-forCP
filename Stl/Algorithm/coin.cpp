/*Write a program to make an amount from given coins */

#include <iostream>
#include<algorithm>
using namespace std;
bool comp(int a,int b){
    return a<=b;
}
int main()
{
    int n;
    cin>>n;
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    int amt;
    cin>>amt;
    while(amt>0){
        int lb = lower_bound(coin,coin+n,amt,comp)-coin-1;
        int m = coin[lb];
        cout<<m<<" ";
        amt = amt - m;
    }

    return 0;
}
