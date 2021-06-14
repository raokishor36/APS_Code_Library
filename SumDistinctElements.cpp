#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[], int n)
{
	sort(arr, arr + n);
	int sum = 0;
	for (int i=0; i<n; i++)
	{
		if (arr[i] != arr[i+1])
			sum = sum + arr[i];
	}
	return sum;
}
