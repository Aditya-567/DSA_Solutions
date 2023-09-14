#include <iostream>
using namespace std;

void countzeroandone(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]==1){
            onecount++;
        }
    }
    cout<<zerocount<<endl;
    cout<<onecount;
}
int main(){
    int arr[]={0,1,0,0,1,1,0,1};
    int n=9;

    countzeroandone(arr,n);
    return 0;
};
