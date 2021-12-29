#include<iostream>
using namespace std;
int main()
{
    int arry[5],n,var=-2;
    int start ,end,mid;
    cout<<"enter the numbers:- ";
    for(int i=0 ; i<=4;i++)
    {
        cin>>arry[i];
    }
    cout<<"enter your's choose number:-";
    cin>>n;

    start=0;
    end=4;
    while(start<=end){
        mid=(start+end)/2;
        if   (arry[mid]==n){
            var=mid;
            break;
        }
        else if (n<arry[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    if (var==-2){
        cout<<"number not found on index";
    }
    else{
        cout<<"element found on index:-"<<var<<endl;

    } 
    return 0;
}


