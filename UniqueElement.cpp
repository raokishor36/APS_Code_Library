#include <bits/stdc++.h>

using namespace std;

void search(int arr[], int n)
{
	int ans = -1;
	for (int i = 0; i < n; i += 2) {
		if (arr[i] != arr[i + 1]) {
			ans = arr[i];
			break;
		}
	}
	if (arr[n - 2] != arr[n - 1])
	{
	    ans = arr[n-1];
	}
	cout << "The required element is " << ans << "\n";
}
