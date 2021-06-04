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

int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	RotateStringLeft(s,k);
	cout<<s;
}
