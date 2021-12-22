#include <iostream>
using namespace std;

int main (){

    int number;
    cout<< "enter the any intiger value:-";
    cin>>number;
    if (number>0)
     cout<<number<<"it is positive number";
    else if (number<1)
        cout<< number<<"it is negative number";
    else
        cout<< number<< "zero";

    return  0;

}