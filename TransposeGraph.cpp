#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int src, int dest)
{
	adj[src].push_back(dest);
}

void displayGraph(vector<int> adj[], int v)
{
	for (int i = 0; i < v; i++) {
		cout << i << "--> ";
		for (int j = 0; j < adj[i].size(); j++)
		{
		    cout << adj[i][j] << " ";
		}
			
		cout << "\n";
	}
}

void transposeGraph(vector<int> adj[], vector<int> transpose[], int v)
{
	for (int i = 0; i < v; i++)
	{
	   	for (int j = 0; j < adj[i].size(); j++)
	   	{
	   	    addEdge(transpose, adj[i][j], i);
	   	}
			 
	}

}
