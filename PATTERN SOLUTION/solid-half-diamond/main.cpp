
#include <iostream>

using namespace std;

int main()
{
    int n,row,col;
    cout<<"enter";
    cin>>n;
    for(row=0;row<n;row ++){
        for(col=0;col<row;col++){
            cout<<" *";
        }cout<<"\n";
    }
    for(row=0;row<n;row ++){
        for(col=0;col<n-row-2;col++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}



