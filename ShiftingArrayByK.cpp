#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  long long int n,k;
		cin>>n>>k;
		long long int arr[n],shiftedarr[n];
		long long int newindex;
		long long int i;
		for( i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for( i=0;i<n;i++)
		{
			newindex = (i+k)%n;
			shiftedarr[newindex] = arr[i];
		}
		for( i=0;i<n;i++)
		{
			cout<<shiftedarr[i]<<" ";
		}
		cout<<"\n";
}


