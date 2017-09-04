#include <iostream>
#include <math.h>

using namespace std;

template <class anyType>

anyType findHyp (anyType a, anyType b)
{
    //a^2 + b^2 = c^2
	return sqrt((a*a) + (b*b));
}

int main ()
{
    //Any data type inserted here will be used in 'findHyp'
	double a=5.6, b=8.5, c;
	c = findHyp(a, b);
	cout << c << endl;
	return 0;
}