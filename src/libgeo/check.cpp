#include "check.h"
#include <cmath>
#include <iostream>

using namespace std;

void check(float x0, float y0, float r, float x1, float y1, float x2, float y2, float x3, float y3)
{
	if (((sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1))>r) && (sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2))>r) && (sqrt((x0-x3)*(x0-x3)+(y0-y3)*(y0-y3))>r)) || ((sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1))<r) && (sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2))<r) && (sqrt((x0-x3)*(x0-x3)+(y0-y3)*(y0-y3))<r)))
	{
		cout << "don 't overlap" << endl;
	}
	else
	{
		cout << "overlap" << endl;
	}
} 
