#include "libgeo/check.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	float x0, y0, r;
	float x1, y1, x2, y2, x3, y3;
	cout << "enter x0,y0,r: ";
	cin >> x0 >> y0 >> r;
	cout << "enter x1,y1: ";
	cin >> x1 >> y1;
	cout << "enter x2,y2: ";
	cin >> x2 >> y2;
	cout << "enter x3,y3: ";
	cin >> x3 >> y3;
	if (r>0)
	{
		check(x0, y0, r, x1, y1, x2, y2, x3, y3);
	}
	else cout << endl << "Error 01";
	return 0; 
}
