#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a, b, nMax, nMin;
    cin>>a>>b;
    nMax = max(a,b);
    nMin = min(a,b);
    cout<<nMax*nMax<<'\n'<<nMin*nMin;
}

