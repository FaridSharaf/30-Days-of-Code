#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int intTest = 0;
    double doubleTest = 0;
    string stringTest;

    
    cin >> intTest;
    cin >> doubleTest;
    

    cin.ignore(); //ignore the /n remain in the stream 
    getline(cin, stringTest);
    


    // Print the sum of both integer variables on a new line.
    cout << i + intTest << endl;

    d =  d + doubleTest;
    cout << fixed << setprecision(1) << d << endl;

    cout << s << stringTest;

    return 0;
}
