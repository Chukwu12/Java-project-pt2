#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	float  pi = 3.14, s, v, r, h;


	cout << ("Enter the cylinder radius: ");
	cin >> r;


	cout << ("Enter the cylinder height: ");
	cin >> h;

	v = pi * r * r * h;
	s = 2 * pi * r *h + 2 * pi * r * r;

	cout << ("Surface area of the cylinder is : ") << s;
	cout << endl;
	cout << ("Volume of the cylinder is : ") << v;
	cout << endl;
	system("pause");
	return 0;
}
