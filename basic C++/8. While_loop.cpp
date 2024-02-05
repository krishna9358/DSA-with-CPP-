#include <bits/stdc++.h>
using namespace std;

int main(){
    // it only runs if the condition is true, if condition is false it wont even run once. 
    // while ( condition ) {
        // code to run until condition is true;
    //}
    int i = 0;
    while (i < 10 ) {
        i++ ;       
        cout <<  i << endl ;
    }


    // do while loop 
    // it ateast runs one time even if the condition is not true
    // do {
        // code to run 
    //} while ( codition ) ;

        do{
            cout << endl << "result for do while " << i << endl;
        }while (i > 10);
    
    return 0;
}