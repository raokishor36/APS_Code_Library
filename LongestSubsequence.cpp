//Longest subsequence where no two adjaccent characters are same

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n;										//Length of the string
	string s;
	cin>>n;
	cin>>s;
	int arr[n]={0};
	arr[0]=1;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			arr[i+1] = arr[i]+1;
		}
		else
		{
			arr[i+1] = arr[i];
		}
	}
	cout<<arr[n-1]<<"\n";
	return 0;
}
