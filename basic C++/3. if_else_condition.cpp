#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 102;
    if ( a > 100){
            cout << "greater than 100 " ;

            // nested if 
            if (a > 50 ){
                cout << "greater than 50";
            }
            else {
                cout << "les than 50 ";
            }
    }
    else if ( a < 100){
        cout << "lesser than 100";
    }
    else{
        cout << "equal to 100";
    }

    return 0;
}