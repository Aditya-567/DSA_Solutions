
#include <iostream>

using namespace std;

int main()
{
    int n,col,row;
    cout<<"enter";
    cin>>n;
    for(row=0;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }

    return 0;
}
