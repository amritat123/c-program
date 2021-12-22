#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the number:-" "\n";
    cin>>n;

    if (n>0)
        cout<<(-n);
    else if (n<0)
        cout<<(+n);
    else
        cout<<("zero");
    // cout<<"\n";
    return 0;
}