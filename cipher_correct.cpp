#include <string>
#include <iostream>
using namespace std;

string solve(int n, int k, const string& s)
{
    string res ="";
    bool x = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i >= k)
        {
            x ^= res[i-k]-'0';
        }
        res.push_back('0'+((s[i]-'0')^x));
        x ^= res.back()-'0';
    }
    return res;
}

int main()
{
    int n,k;
    string s;
    cin >> n >> k >> s;
    cout << solve(n,k,s);
    return 0;
}
