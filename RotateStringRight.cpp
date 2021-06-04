#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void RotateStringLeft(string &s, int d)
{
    reverse(s.begin(),s.begin()+d);
    reverse(s.begin()+d,s.end());
    reverse(s.begin(),s.end());
}

void RotateStringRight(string &s, int d, int n)
{
    RotateStringLeft(s,s.length()-d);
}

int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	RotateStringRight(s,k);
	cout<<s;
}
