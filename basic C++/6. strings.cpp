#include <bits/stdc++.h>
using namespace std;

int main(){
    //string data type can directyl store the strings before space.
    // string name = "value";
    // cout << name[index] --> gives char of thtat particular index. 
    string name = "krishna";
    cout << name [2] << endl;

    // to find the length of the string 
    // int varToStoreLength = arrayName.size();
    int length = name.size();
    cout << length << endl ; 
    // last char of the string is null char 
    cout << name[length-1]; //will print last char of the string

    //you can chnge the value by just accessing the index; it should be char;
    name [5] = 'k';


    return 0;
}