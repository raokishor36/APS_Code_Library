#include<bits/stdc++.h>
using namespace std;

int divSum(int n)
{
	if(n == 1)
	return 1;
	int result = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (i == (n / i))
				result += i;
			else
				result += (i + n/i);
		}
	}
	return (result + n + 1);
}
