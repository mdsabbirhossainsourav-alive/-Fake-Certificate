#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int p = 0,mz = 0,z = 0;
        for(char c : s) 
        {
            if (c == '1') 
            {
                p++;     
                z = 0;      
            } 
            else 
            {
                z++;        
                if (z > mz)
                {
                    mz = z; 
                }
            }
        }
        cout << p + mz << endl ; 
    }
    return 0;
}