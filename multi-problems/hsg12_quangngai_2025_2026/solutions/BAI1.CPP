#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void fileIO(const string& fileName = "")
{
    const string INPFile = fileName + ".INP";
    const string OUTFile = fileName + ".OUT";
    if (fopen(INPFile.c_str(), "r"))
    {
        freopen(INPFile.c_str(), "r", stdin);
        freopen(OUTFile.c_str(), "w", stdout);
    }
}

bool Solve(int n)
{
    for (int x = sqrt(n); x < n; x++)
    {
        long long X = (long long) x * x;
        long long Y = X - n;
        if (Y <= 0)
        {
            continue;
        }
        long long tmp = sqrt(Y);
        if (tmp * tmp == Y && X - Y == n)
        {
            cout << x << " " << tmp << '\n';
            return true;
        }
    }
    return false;
}

void readData()
{
    int N;
    cin >> N;
    while(N--)
    {
        int x;
        cin >> x;
        if (!Solve(x))
        {
            cout << -1 << '\n';
        }
    }
}

int main()
{
    fastIO();
    fileIO("BAI1");
    readData();
    return 0;
}