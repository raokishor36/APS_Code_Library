#include<iostream>
using namespace std;

struct graph	
{
	int v;
	int e;
	int **dir;	
};

// Returns degree of ver in given graph
int findDegree(struct graph *G, int ver)
{
	// Traverse through row of ver and count
	// all connected cells (with value 1)
	int degree = 0;		
	for (int i=0; i<G->v; i++)	

		// if src to des is 1 the degree count
		if (G-> dir[ver][i] == 1)
			degree++;			
	
	// below line is to account for self loop in graph
	// check sum of degrees in graph theorem
	if(G-> dir[ver][ver] == 1)
		degree++;
	return degree;		
}
