#include <bits/stdc++.h>

using namespace std;

string numbercompare(int num)
{
    if (num<0 && num%2!=0)
        return "YES";

    return "NO";
}


int main()
{
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    cout << numbercompare(a)<<'\n';
    cout << numbercompare(b)<<'\n';
    cout << numbercompare(c)<<'\n';
    cout << numbercompare(d)<<'\n';
    cout << numbercompare(e)<<'\n';
}
