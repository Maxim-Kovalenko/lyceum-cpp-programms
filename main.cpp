#include <bits/stdc++.h>

using namespace std;

void compare(int a, int b, int c)
{
    int num1 = max(max(a, b), c);
    int num2 = min(min(a, b), c);
    cout<<num1*num1<<'\n'<<num2*num2;
}
int main()
{
    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    compare(num1, num2, num3);
}

