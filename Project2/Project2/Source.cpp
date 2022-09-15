#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, x = 0.48 * 8, y = 0.47 * 8, z = -1.32 * 8;
	b = (pow(fabs(x + y), 0.2)) / (pow(fabs(z), 1.34)) + (y - z) * (y - z) / (1 + pow(sin(z), 2)) + (pow(fabs(z + y), 3)) / (z / pow(cos(x), 2));
	a = (sqrt(pow(fabs(pow(x, 2) - 1), 0.3)) - pow(fabs(sin(y + 2 * b)), 1 / 3)) / (1 + x + (pow(y, 2) / 2) + (pow(z, 3) / (2 * 3)));
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}