#include<iostream>
#include<algorithm>
using namespace std;

int digitGCD(int n)
{
	int gcd = 0;
	while (n > 0)
	{	
		gcd = __gcd(n%10, gcd);
		if (gcd == 1)
		return 1;
		n = n/10;
	}
	return gcd;
}
