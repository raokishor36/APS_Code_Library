#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void subArray(int arr[], int n)
{
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
