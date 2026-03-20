#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st;
        int resp = 0;

        for(int k = 0; k < n; k++)
        {   
            if (st.count(s[k]) == 0)
            {
                st.insert(s[k]);

                resp += 2;
            }
            else
            {
                resp ++;
            } 
        }
        cout << resp << endl;
    }
}