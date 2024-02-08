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


int main(){
    // patterns
    // mostly 2 nested loops --> outer loop, inner loop
    // outer loop --> rows , inner loop --> columns

    // Rules 
        // 1. for the outer loop, count the no. of lines
        // 2. for the inner loop, focus on the columns and connect them somehow to the rows
        // 3. Print them "*" inside the inner for loop
        // 4. observe symmetry (optional)


    // note: in online cp compilers, no need to write main function, directly put the main code into function given with test cases code.
    // test cases : 2 2 3 , here 2 is the no. of test cases, and 2 3 are the inputs.
    // you can write like: ( no need of this in coding ninja)
    //   int t; 
    //   cin >> t;
    //   for (int i = 0; i<t, i++){
    //     //main code function calling here
    //   }



    int n = 5 ; 
    pattern1(n);


    

    return 0;
}