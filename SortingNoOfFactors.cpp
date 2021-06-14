#include <bits/stdc++.h>
using namespace std;

struct element
{
	int index, no_of_fact;
};

int countFactors(int n)
{
	int count = 0;
	int sq = sqrt(n);
	if (sq * sq == n)
		count++;
	for (int i=1; i<sqrt(n); i++)
	{
		if (n % i == 0)	
			count += 2;
	}		
	return count;
}

bool compare(struct element e1, struct element e2)
{
	if (e1.no_of_fact == e2.no_of_fact)
		return e1.index < e2.index;
	return e1.no_of_fact > e2.no_of_fact;	
}

void printOnBasisOfFactors(int arr[], int n)
{	
	struct element num[n];
	for (int i=0; i<n; i++)
	{
		num[i].index = i;
		num[i].no_of_fact = countFactors(arr[i]);		
	}
	sort(num, num+n, compare);
	for (int i=0; i<n; i++)
		cout << arr[num[i].index] << " ";
}
