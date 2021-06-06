#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void setBit(int & num,int pos)
{
     num |= (1 << pos);
}

int main()
{
     int num, pos;
     cin>>num>>pos;
     setBit(num, pos);
     cout << (int)(num) << endl;
     return 0;
}
