#include<iostream> 
using namespace std;
int main(){
    int num,local,temp,min,arr[40];
    cout<<"Enter the number of digits:-";
    cin>>num;
    cout<<"Enter the digit:-";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++){
        min=arr[i];
        local=i;
        for(int j=i+1;j<num;j++){
            if(min>arr[j]){
                min=arr[j];
                local=j;
            }
        }
        // swaping of variable.... 
        temp=arr[i];
        arr[i]=arr[local];
        arr[local]=temp;
    }
    cout<<"selection sort lists";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}