#include<iostream>
using namespace std;
int main (){
    int num,sum=0;
    cout<< "enter any number:-";
    cin>> num;
    for (int i=1;i<=num;i++){
        sum+=i;
    }
    return 0;
}