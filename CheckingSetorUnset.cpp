#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

bool at_position(int num,int pos)
{
    bool bit = num & (1<<pos);
    return bit;
}
  
int main()
{
    int num,pos;
    cin>>num>>pos;
    bool bit = at_position(num, pos);
    cout << bit << endl;
    return 0;
}
