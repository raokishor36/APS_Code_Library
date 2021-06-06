#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void unset(int &num,int pos)
{
    num &= (~(1 << pos));
}
int main()
{
    int num,pos;
    cin>>num>>pos;
    unset(num, pos);
    cout << num << endl;
    return 0;
}
