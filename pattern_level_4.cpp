#include <iostream>
using namespace std;

int main(){
    // 1
    // 12
    // 1 3
    // 1  4
    // 1   5
    // 1    6
    // 1234567

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         if(col==0 || col==row || row==n-1){
    //             cout<<col+1;
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 123456
    // 2   6
    // 3  6
    // 4 6
    // 56
    // 6
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=row+1; col<=n; col++){
    //         if(col ==row+1 || col==n || row==0){
    //             cout<<col;
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // *       *
    // **     **
    // ***   ***
    // **** ****
    // **** ****
    // ***   ***
    // **     **
    // *       *
    int num;
    cin>>num;
    int n=num/2;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        for(int col=0; col<2*n-2*row-1; col++){
            cout<<" ";
        }    
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row;col++){
            cout<<"*";
        }
        for(int col=0; col<2*row+1; col++){
            cout<<" ";
        }
        for(int col=0; col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

