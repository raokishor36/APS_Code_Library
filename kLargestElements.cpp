#include <bits/stdc++.h>
using namespace std;

void kLargest(int arr[], int n, int k)
{
	sort(arr, arr + n, greater<int>());
	for (int i = 0; i < k; i++)
		cout << arr[i] << " ";
}
