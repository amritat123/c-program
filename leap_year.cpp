// leap year
# include<iostream>
using namespace std;
int main(){

    int leap_year;

    cout<<"enter any year to check is it leap year:-";

    cin>> leap_year;

    if ((leap_year%4==0) && (leap_year%100!=0) || (leap_year%400==0))
        cout<<leap_year<<" it is leap year" "\n";
    else
        cout<<leap_year<< "it's not leap year";
    return 0;
}