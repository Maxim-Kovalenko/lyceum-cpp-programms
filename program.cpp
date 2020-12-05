#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if (a%2 == 0 && a>0)
    {
      cout<<"YES"<<"\n"<<a + 2;
    }
    else
    {
      if (a<0)
        cout<<"NO"<<"\n"<<2;
      else
        cout<<"NO"<<"\n"<<a+1;
    }
    return 0;
}
