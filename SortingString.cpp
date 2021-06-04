#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void StringSort(string s, int n, int m)
{
	sort(s.begin()+n,s.begin()+m+1,greater<char>());
	cout<<s<<'\n';	//Output
}

int main()
{
	string s;				//Input String
	int n,m;				//Starting and ending index to be sorted
	cin>>s;
	cin>>n>>m;
	StringSort(s,n,m);
	return 0;
}
