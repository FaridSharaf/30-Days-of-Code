    #include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    short con = 0 ,conMax;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n > 0)
    {
        if (n%2 == 1) 
        {
            con++;
            if (con > conMax) conMax = con;
        }
        else 
            con = 0;


        n /=2;
    }
    cout << conMax;
    return 0;
}
