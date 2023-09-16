#include <iostream>
using namespace std;

int findFirstOccurence(int arr[],int n,int target){
    int ans =0;
    int start = 0;
    int end= n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(target == arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if(target < arr[mid]){
            end=mid -1;
        }
        else if(target > arr[mid]){
            start =mid +1;
        }
        mid=(start+end)/2;

    }
    return ans;
}

int main(){
    int arr[]={1,5,10,10,10,15,19};
    int n = 7;
    int target =10;

    cout<<"Target found At index : "<<findFirstOccurence(arr,n,target);
}
