#include<iostream>
using namespace std;

int main(){
    // ***** *****
    // ****   ****
    // ***     ***
    // **       **
    // *         *
    // *         *
    // **       **
    // ***     ***
    // ****   ****
    // ***** *****
    // int num ;
    // cin>>num;
    // int n=num/2;
    // for(int row=0; row<n; row++){
    //     //inverted pyramid
    //     for(int col=0; col<n-row; col++){
    //         cout<<"*";
    //     }
    //     //full pyramid
    //     for(int col=0; col<2*row+1; col++){
    //         cout<<" ";
    //     }
    //     //inverted pyramid 2
    //     for(int col=0; col<n-row; col++){
    //         cout<<"*";
    //     }        
    //     cout<<endl;
    // }
    
    // for(int row=0; row<n; row++){
    //     //pyramid
    //     for(int col=0; col<row+1; col++){
    //         cout<<"*";
    //     }
    //     //inverted full pyramid
    //     for(int col=0; col<2*n-2*row-1; col++){
    //         cout<<" ";
    //     }
    //     //pyramid
    //     for(int col=0; col<row+1; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 22
    // 333
    // 4444

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<row+1;
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 5*5*5*5*5
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<2*row+1; col++){
            if(col%2==1){
                cout<<"*";
            }else{
                cout<<row+1;
            }            
        }
        cout<<endl;
    }
    return 0;
}