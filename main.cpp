#include <bits/stdc++.h>

using namespace std;

string compare(int num1, int num2, int num3)
{
    int Min;
    if (num1>num2)
    {
        Min = min(num2, num3);
        cout<<num1*num1<<'\n'<<Min*Min;
    }
    else
    {
        if(num1<num2)
        {
            Min = min(num1, num3);
            cout<<num2*num2<<'\n'<<Min*Min;
        }
        else
        {
            Min =
        }
    }

}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    compare(a, b, c);
}
