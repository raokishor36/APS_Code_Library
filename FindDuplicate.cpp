#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int FindDuplicate(int arr[], int size)
{
    int duplicate=0;
    for(int i=0;i<size;i++)
    {
        duplicate = duplicate ^ arr[i] ^ i;
    }
    return duplicate;
}

int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int answer = FindDuplicate(arr,size);
    cout<<answer;
	return 0;
}
