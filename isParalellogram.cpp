#include <bits/stdc++.h>
using namespace std;

struct point {
	double x, y;
	point() { }
	point(double x, double y): x(x), y(y) 
	{ 
	    
	}
	
	bool operator<(const point& other) const
	{
		if (x < other.x) {
			return true;
		} else if (x == other.x) {
			if (y < other.y) {
				return true;
			}
		}
		return false;
	}
};

point getMidPoint(point points[], int i, int j)
{
	return point((points[i].x + points[j].x) / 2.0,
				(points[i].y + points[j].y) / 2.0);
}

bool isParallelogram(point points[])
{
	map<point, vector<point> > midPointMap;
	int P = 4;
	for (int i = 0; i < P; i++) {
		for (int j = i + 1; j < P; j++) {
			point temp = getMidPoint(points, i, j);
			midPointMap[temp].push_back(point(i, j));
		}
	}
	int two = 0, one = 0;
	for (auto x : midPointMap) 
	{
		if (x.second.size() == 2)
			two++;
		else if (x.second.size() == 1)
			one++;
		else
			return false;	
	}
	if (two == 1 && one == 4)
		return true;
	return false;
}
