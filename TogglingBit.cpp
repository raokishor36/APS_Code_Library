#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void toggle(int &num,int pos)
{
    num ^= (1 << pos);
}
int main()
{
    int num,pos;
    cin>>num>>pos;
    toggle(num, pos);
    cout << num << endl;
    return 0;
}
