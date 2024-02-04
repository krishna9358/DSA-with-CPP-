#include <bits/stdc++.h>
using namespace std;
int main (){
    //int , 4 byte , 10^-9 to 10^9 range
    // long , 4 byte , 10^-12 to 10^12 range
    // long long , 8 byte , 10^-18 to 10^18 range
    int a;
    long b;
    long long c;

    //float , 4 byte , 1.2 * 10^-38 to 3.4 * 10 ^ 38
    // double , 8 byte,  2.3 * 10^-308 to 1.7 * 10 ^ 308
    // long double , 10 byte, 3.4* 10^-4932 to 1.1 * 10^ 4932
    float x = 2.3;
    float y = 5;
    double z = 10.3;
    double s = 10.4;

    // string -> only takes input string before the space
    string name = "hello world";
    cout << name << "\n"; // here it takes full word
    string fullname; 
    cout << "enter your full name : ";
    cin >> fullname;
    cout << "your full name is : " << fullname << "\n";  // here it pritns before the space

    /*  if you immediately use getline() after cin, the newline character left in the input buffer 
    by the previous cin will be considered the next input for getline().
     This can lead to unexpected behavior, and it seems like getline() is not waiting for user input.
    To fix this issue, you need to clear the input buffer before using getline(). 
    The cin.ignore(numeric_limits<streamsize>::max(), '\n'); line achieves this. */
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


       // getline -> take the input full one line  with space as well
       // getline (function to perform, variable to store)
    string getline_var ;
    cout << "enter your full name once again : ";
    getline(cin, getline_var);
    cout << "your full name is : " << getline_var; 


    //char -> can store all ascii char 256
    char abc ;
    char def = 'a';
    cin >> abc;
    cout << abc;

    return 0;


}