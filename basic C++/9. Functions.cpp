#include <bits/stdc++.h>
using namespace std;

//void functions
void name(){
    // void function won't return anything
    // no parameters given hence, non-parameteric functions 
    cout << " I am krishna "; 
}

// parameterised function
void name_with_parameters(string name_para){
    cout << "Name is : " << name_para; 
    //functions given hence parameterised function 
}


//return function
int sum(int a, int b){
    // functin which return some value 
    int c = a + b;
    return c;
    // need to store this return value in some var to use it 
    // make sure to return when use int, otherwise it will throw some garbage value.
}

//pass by value;
int changeString(string s ){
    cout << endl << s << endl; 
    s[0] = 'P';
    cout << s << endl;
}

//pass by reference;
int changeString2(string &s2 ){
    cout << endl << s2 << endl; 
    s2[0] = 'P';
    cout << s2 << endl;
}


int main(){
    // functions are code of blocks which perform a paticular task 
    // use to modularise the code 
    // use to increase the readability 
    // used to decrease the repeatation of the same code. 

    //types of functions 
    // void, return, parameterised, non-parameterised 
    
    //defining the functions 
    // dataType name (parameters){
        // code to run 
    // }    

    //calling the function ]
    // name();
    name (); cout << endl;
    name_with_parameters("Krishna");
    cout << endl ;
    int d=  sum(10,20);
    cout << d ; 

    // if parameters are given then it is parameterised functions 
    // if parameters are not given then it is non-parameterised functions 


    //some built in functions 
    // 1. min(a,b)  --> tells minimum number out of 2 
    // 2. max(a,b)  --> tells maximum number out of 2


// function pass by value;
// one copy is created and it changes for that particular function, the original value does not change
    cout << endl << "pass by value function";
    string s = "Krishna";
    changeString(s);
    cout << s ; 


// function pass by reference;
// instead of passing the copy, you pass the reference to change in the actual/original value. You do it using & functoin with arguement.
// array, map , list , vector all these are passed by only reference. 
        cout << endl << "pass by value function";
    string s2 = "Krishna";
    changeString2(s2);
    cout << s2 ; 

    return 0;
}

