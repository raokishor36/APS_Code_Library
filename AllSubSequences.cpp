
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;
 
void printSubsequences(int arr[], int n)
{
    unsigned int opsize = pow(2, n);
    for (int i = 1; i < opsize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))
            {
                cout << arr[j] << " ";
            }   
        }
        cout << endl;
    }
}
