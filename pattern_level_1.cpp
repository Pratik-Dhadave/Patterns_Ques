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

    int ROWS =10;
    int COLS = 7;
    for(int row=0; row<ROWS; row++){
        for(int col=0; col<COLS; col++){
            if(row == 0 || row == ROWS-1)
            cout<<"* ";
            else{
                if(col==0 || col==COLS-1)
                cout<<"* ";
                else
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}