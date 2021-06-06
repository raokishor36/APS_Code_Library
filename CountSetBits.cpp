#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int CountSetBits(int x)
{
    int count=0;
    while(x)
    {
        x = x & (x-1);
        count++;
    }
    return count;
}

int main() {
    int input;
    cin>>input;
    int answer = CountSetBits(input);
    cout<<answer;
	return 0;
}
