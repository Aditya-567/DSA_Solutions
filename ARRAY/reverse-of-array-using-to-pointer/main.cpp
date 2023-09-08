
#include <iostream>

using namespace std;

void reverse(int arr[],int size){
    /* initailization of two pointer*/
    int start=0;
    int end=size - 1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={2,3,5,8,4};
    reverse(arr,5);
    for( int i=0;i<5;i++){
        cout<<arr[i];
    }
    
}