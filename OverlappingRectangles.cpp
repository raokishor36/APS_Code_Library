#include <bits/stdc++.h>

struct Point {
	int x, y;
};

bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
	if (l1.x == r1.x || l1.y == r1.y || l2.x == r2.x || l2.y == r2.y) 
	{
		return false;
	}
	if (l1.x >= r2.x || l2.x >= r1.x)
		return false;
	if (l1.y >= r2.y || l2.y >= r1.y)
		return false;
	return true;
}
