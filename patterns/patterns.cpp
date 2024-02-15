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


//pattern 5
void pattern5(int n){
    for (int i = 1; i<= n; i++){
        for (int j = 0 ; j<n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


//pattern 6
void pattern6(int n){
    for (int i = 1; i<= n; i++){
        for (int j = 1 ; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

//pattern 7
void pattern7(int n){
    for (int i = 0; i< n; i++){
        for (int j = 1 ; j<=n-i-1; j++){
            cout << " ";}
        for (int k = 1 ; k<=(i*2)+1; k++){
            cout << "*";
        }
        for (int j = 1 ; j<=n-i-1; j++){
            cout << " ";
        }
        
        cout << endl;
    }
    cout << endl;
}


//pattern 8
void pattern8(int n){
    for (int i = 0; i< n; i++){
        for (int j = 0 ; j<i; j++){
            cout << " ";}
        for (int k = 0 ; k<2*n-(2*i+1); k++){
            cout << "*";}
        for (int j = 0 ; j<i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
   cout << endl;
}

//pattern 9 //call function 7 and 8 together 
void pattern9(int n){
    for (int i = 0; i< n; i++){
        for (int j = 1 ; j<=n-i-1; j++){
            cout << " ";}
        for (int k = 1 ; k<=(i*2)+1; k++){
            cout << "*";
        }
        for (int j = 1 ; j<=n-i-1; j++){
            cout << " ";
        }
        
        cout << endl;
    }
        for (int i = 0; i< n; i++){
        for (int j = 0 ; j<i; j++){
            cout << " ";}
        for (int k = 0 ; k<2*n-(2*i+1); k++){
            cout << "*";}
        for (int j = 0 ; j<i; j++){
            cout << " ";
        }
        
        cout << endl;
    }

}

//pattern 10
void pattern10(int n){
    for (int i=1 ; i<=2*n-1; i++){
        int stars= i;
        if (i>n) stars = 2*n-i;
        for (int j=1; j<=stars;j++){
            cout << "*";    
        }
        cout<<endl;
    }
    
}



//pattern 11
void pattern11(int n){
    int start =1 ;
    for (int i =0 ; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0; 
        for( int j =0; j<=i; j++){
            cout << start;
            start = 1- start ;
        }
        cout << endl;
    }
    cout << endl;
}


//pattern 12
void pattern12(int n){
    int space = 2*(n-1);
for (int i =1; i<=n; i++){
    for( int j = 1; j<=i; j++) cout << j;
    for (int j=1; j<=space;j++) cout << " ";
    for (int j =i; j>=1; j--) cout << j;
    cout << endl;
    space -= 2;
}
}

void pattern13(int n){
   char  num = 1;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << num << " ";
            num +=1;
        }
        cout << endl;
    }
}


void pattern14(int n){
    for (char i = 0; i<n; i++){
        for (char ch = 'A'; ch<='A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n){
        for (char i = 0; i<n; i++){
        for (char ch = 'A'; ch<='A' + (n-i-1) ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


void pattern16(int n ){
    cout <<endl;
        for (char i = 0; i<n; i++){
            char ch = 'A' + i;
        for (char j = 0; j<= i ; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


void pattern17(int n ){
    for(int i =0 ; i<n;i++){
        for (int j = 0; j<n-i-1; j++){
            cout << " " ; 
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j = 1; j<=2*i+1; j++){
            cout << ch ;
            if (j <= breakpoint) ch++;
            else ch--;
        }
        for (int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n){
    for (int i = 0; i<n; i++){
        for (char ch  = 'E' - i ; ch <= 'E'; ch++ ){
            cout << ch << " "; 
        }
        cout << endl;
    }

}
void pattern19(int n){

}
void pattern20(int n){

}
void pattern21(int n){

}
void pattern22(int n){

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
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);   
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);

    

    return 0;
}