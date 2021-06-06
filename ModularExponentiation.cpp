#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
 
int power(long long x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0) return 0;
 
    while (y > 0)
    {
        if (y & 1)
        {
            res = (res*x) % p;
        }
            
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
int main()
{
    int x,y,p;
    cin>>x>>y>>p;
    cout <<power(x, y, p);
    return 0;
}
