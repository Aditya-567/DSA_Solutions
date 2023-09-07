
#include <iostream>

using namespace std;

int main()
{
    int n,row,col;
    cout<<"enter";
    cin>>n;
    for(row=0;row<n;row ++){
        for(col=0;col<n-row-1;col++){
            cout<<"  ";
        }
        for(col=0;col<2*row+1;col++){
            if(row==0||row==n-1){
                cout<<" *";
            }else if(col==0||col==(2*row)){
                cout<<" *";
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    

    return 0;
}



