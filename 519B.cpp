#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n_err; 
    cin >> n_err;

    map<int, int> test;

    for(int i = 0; i < n_err; i++)
    {   
        int err_i;
        cin >> err_i;

        test[i] = err_i;
    }
  
    cout << test[3];
}