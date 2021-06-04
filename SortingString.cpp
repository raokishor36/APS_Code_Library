#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	string s;				//Input String
	int n,m;				//Starting and ending index to be sorted
	cin>>s;
	cin>>n>>m;
	sort(s.begin()+n,s.begin()+m+1,greater<char>());
	cout<<s<<'\n';	//Output
	return 0;
}
