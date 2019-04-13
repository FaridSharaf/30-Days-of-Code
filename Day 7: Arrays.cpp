#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    
    int A[N];

    for (int i = 0; i < N; i++) 
    {
        cin >> A[i] ;
    }

    for (int j = N-1 ; j >= 0 ; j--)//*
    {
        cout << A[j] << " ";
    }
    
    // cout <<endl;

    return 0;
}

//*
//Common bug
// if you started the loop from n to j > 0 it will print
// out of index numbers like zero, this is because it will print A[4] ---> A[1]
// instead of printing A[3] ---> A[0] which is the input index.
