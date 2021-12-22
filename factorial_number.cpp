// how to find sum of digit
#include<iostream>
using namespace std;
int main(){
    int fact_number,store=1;
    cout<<"enter a number to find factorial number:-";
    cin>> fact_number;
    for (int i=1;i<=fact_number;i++){

        store=store*i;
    }
    cout<<"...factorial number of..."<<fact_number<<"="<<store;
    return 0;

}