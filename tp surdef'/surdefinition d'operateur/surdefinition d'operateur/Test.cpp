#include <iostream>
#include "Rectangle.h"

using namespace std;


void main()
{
	CRectangle r1, r2;
	r1.SetRectangle(2, 5.7);
	r2.SetRectangle(3, 2);
	CRectangle r3 = r1 + r2;
	cout << endl;
	cout <<"la surface du rectangle en cm^2 : "<< r3.CalculSurface()<<" cm^2"<<endl;

}