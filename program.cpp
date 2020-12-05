#include <bits/stdc++.h>

using namespace std;

string comparator(int num)
{
    if(num/100 != num/10%10 && num/10%10 != num%10 && num/100 != num%10)
        return "YES";
    return "NO";
}

int main()
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    cout << comparator(n) << '\n';
    cout << comparator(a) << '\n';
    cout << comparator(b) << '\n';
    cout << comparator(c) << '\n';
    cout << comparator(d);
}
