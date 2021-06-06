#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void strip_last_set_bit(int &num)
{
    num = num & (num-1);
}
int main()
{
    int num;
    cin>>num;
    strip_last_set_bit(num);
    cout << num << endl;
    return 0;
}
