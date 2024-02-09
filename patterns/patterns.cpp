#include <bits/stdc++.h>
using namespace std;

//pattern 1 
void pattern1(int n){
 for ( int i = 0 ;i<n ; i++){
        for (int j = 0; j <n ;j++){
            cout << " * " ;
        }
        cout <<endl;
    }
}

//pattern 2 
void pattern2(int n){
    for(int i = 0; i<n; i++){
        for ( int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

//pattern 3 
void pattern3(int n){
    for(int i = 1; i<=n; i++){
        for ( int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


//pattern 4
void pattern4(int n){
    for (int i = 1 ; i<= n; i++){
        for (int j = 0 ; j<i; j++){
            cout << i ;
        }
        cout << endl;
    }
}


// *****
// ****
// ***
// **
// *

//pattern 5
void pattern5(int n){
    for (int i = 1; i<= n; i++){
        for (int j = 0 ; j<n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}



int main(){
    // patterns
    // mostly 2 nested loops --> outer loop, inner loop
    // outer loop --> rows , inner loop --> columns

    // Rules 
        // 1. for the outer loop, count the no. of lines
        // 2. for the inner loop, focus on the columns and connect them somehow to the rows
        // 3. Print them "*" inside the inner for loop
        // 4. observe symmetry (optional)






    int n = 5 ; 
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);    

    

    return 0;
}