#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() 
{
    
    int n;
    string s, sortedOdd = "", sortedEven = "";
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < s.length(); j++)
        {
            if (j % 2 == 0)
                sortedEven += s[j];
            else
                sortedOdd += s[j];
        }
        cout << sortedEven << " " << sortedOdd <<endl;
        sortedEven = "";
        sortedOdd = "";
    }

    

    return 0;
}
