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

int findLastOccurence(int arr[],int n,int target){
    int ans =0;
    int start = 0;
    int end= n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(target == arr[mid]){
            ans = mid;
            start = mid+1;
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

int findTotalOccurence(int arr[],int n,int target){
    int firstOcc=findFirstOccurence(arr,n,target);
    int lastOcc=findLastOccurence(arr,n,target);
    int Ttoal = lastOcc-firstOcc + 1;
    return Ttoal;
}

int main(){
    int arr[]={1,5,10,10,10,10,15,19};
    int n = 8;
    int target =10;

    cout<<"Target found At index : "<<findTotalOccurence(arr,n,target);
}
