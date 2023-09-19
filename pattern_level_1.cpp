#include <iostream>
using namespace std;

int main(){
    //  * * * *
    //  * * * * 
    //  * * * *
    //  * * * *

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }    


    //  * * * * *
    //  * * * * *
    //  * * * * *

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<5; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //  * * * * *
    //  *       *
    //  *       *
    //  *       *
    //  *       *
    //  * * * * *

    // int ROWS =10;
    // int COLS = 7;
    // for(int row=0; row<ROWS; row++){
    //     for(int col=0; col<COLS; col++){
    //         if(row == 0 || row == ROWS-1)
    //         cout<<"* ";
    //         else{
    //             if(col==0 || col==COLS-1)
    //             cout<<"* ";
    //             else
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // *
    // * *
    // * * *
    // * * * * 
    // * * * * *

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // * * * * *
    // * * * *
    // * * *
    // * *
    // * 

    // int n; 
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5 4 3 2 1
    // 5 4 3 2
    // 5 4 3
    // 5 4
    // 5

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<<n-col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2 
    // 1

    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}