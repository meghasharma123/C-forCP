/* WAP to use strtok function to print each token of the string */
#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100]="This is Megha Sharma writing my code.";
    char *ptr = strtok(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;
}
