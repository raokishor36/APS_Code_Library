#include <bits/stdc++.h>
using namespace std;

bool checkOrigin(int x1, int y1, int x2, int y2)
{
return (x1 * (y2 - y1) == y1 * (x2 - x1));
}
