#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int FindUnique(int arr[], int size)
{
    int unique=0;
    for(int i=0;i<size;i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
}

int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int answer = FindUnique(arr,size);
    cout<<answer;
	return 0;
}
