#include <iostream>
using namespace std;
int main(){
    int temp ;
    int bubblesort[]={1,334,4,53,7};
    int n=sizeof(bubblesort)/sizeof(bubblesort[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (bubblesort[i]>bubblesort[j]){
                temp=bubblesort[i];
                bubblesort[i]=bubblesort[j];
                bubblesort[j]=temp;

            }   
        // cout<<"bubble sort"<<bubblesort[i]<<endl;  
        }
    }
    for (int i:bubblesort)
        cout<<i<<endl;
    return 0;

}
    


