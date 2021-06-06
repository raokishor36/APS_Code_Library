#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    char input;
    cin>>input;
    int answer = (int)input;
    answer = answer | 32;
    cout<<(char)answer;
	return 0;
}
