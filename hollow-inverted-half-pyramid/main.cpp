
#include <iostream>

using namespace std;

int main()
{
    int n,row,col,space;
    cout<<"enter";
    cin>>n;
    for(row=0;row<n;row ++){
        for(col=0;col<n-row;col++){
            if(col==0 || col==(n-row-1))
            {
                cout<<" *";
            }
            else if(row==0){
                cout<<" *";
            } else{
                cout<<"  ";
            }
        }cout<<"\n";
    }
    

    return 0;
}
