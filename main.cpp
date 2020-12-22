#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout << compare(a, b, c);
    return 0;
}

string compare(int a, int b, int c)
{
    int num1, num2, num3, num4, num5;
    if(a>b)
    {
        num1 = max(a, c)
        num2 = min(a, c)
        num3 = max(num1, b)
        num4 = min(num1, b)
        num5 = min(num2, num4)
    }
    //else
    //{
      //  if(a<b)
        //{

        //}
    //}
}
