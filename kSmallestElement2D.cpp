#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct HeapNode {
	int val;
	int r;
	int c;
};

void swap(HeapNode* x, HeapNode* y)
{
	HeapNode z = *x;
	*x = *y;
	*y = z;
}

void minHeapify(HeapNode harr[], int i, int heap_size)
{
	int l = i * 2 + 1;
	int r = i * 2 + 2;
	int smallest = i;
	if (l < heap_size && harr[l].val < harr[i].val)
		smallest = l;
	if (r < heap_size && harr[r].val = 0) {
		minHeapify(harr, i, n);
		i--;
	}
}

int kthSmallest(int mat[4][4], int n, int k)
{
	if (k < 0 && k >= n * n)
	{
	    return INT_MAX;
	}
	HeapNode harr[n];
	for (int i = 0; i < n; i++)
	{
	    harr[i] = { mat[0][i], 0, i };
	}

	HeapNode hr;
	for (int i = 0; i < k; i++) {
		hr = harr[0];
		int nextval = (hr.r < (n - 1)) ? mat[hr.r + 1][hr.c] : INT_MAX;
		harr[0] = { nextval, (hr.r) + 1, hr.c };
		minHeapify(harr, 0, n);
	}
	return hr.val;
}
