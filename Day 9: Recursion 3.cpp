#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) 
{
    if (n <= 1) return 1;
    return n * factorial(n-1); //Defult return
}

int main()
{
    int n;

    cin >> n;

    cout <<factorial(n);

    return 0;
}
